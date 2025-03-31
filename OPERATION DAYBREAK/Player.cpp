#include <iostream>
#include <string>
#include <vector>
#include "Header.h"

using namespace std;


Player::Player(Map& mapRef) // Josh Roberts
{
	map = mapRef;
}

void Player::turn() //Josh Roberts
{
	string title = "you stand in a dark room. What Do you do ? ";

	vector<string> options1 = {"Search", "Open Your Bag"};
	vector<string> options2 = {"Move", "Open Your Bag"};

	vector<string> options = (mapLog[pos[0]][pos[1]] == 1) ? options1 : options2;

	int value = Menu(title, options, options.size());

	if(value == 0 && mapLog[pos[0]][pos[1]] == 1)
	{
		int room = map.GetRoom(pos);
		mapLog[pos[0]][pos[1]] = 2;
		if(room == 2 && !hasMap)
		{
			cout << "You look around the room, you spot a desk and open search the drawers. \nWhile looking through the drawers you find something?\n\n";

			hasMap = true;
			options1.push_back("Look at Map");
			options2.push_back("Look at Map");
			cout << "You found a map!\n" << "After finding your bearings you note your position(P) and the position of your target(X) on the map.\n\n";
			
		}

		else if(room == 3)
		{
			cout << "You look around the room, you spot a desk and open search the drawers. \nWhile looking through the drawers you find something?\n\n";
			medkits += 1;
			cout << "You found a Medkit!\n" << "You place it in your bag.\n\n";

		}
		else if(room == 4 && !hasGun)
		{
			cout << "You look around the room, you spot a desk and open search the drawers. \nWhile looking through the drawers you find something?\n\n";
			hasGun = true;
			cout << "You found a Gun!\n" << "You place it in your bag.\n\n";

		}

		else if(room == 5)
		{
			cout << "You look around the room, you spot a desk and open search the drawers. \nWhile looking through the drawers you find something?\n\n";
			bullets += 1;
			cout << "You found a Bullet!\n" << "You place it in your bag.\n\n";

		}

		else
		{
			cout << "You look around the room and find nothing of intrest" << endl;
		}

	}
	else if(value == 0 && mapLog[pos[0]][pos[1]] == 2)
	{
		Move();
	}
	else if(value == 1)
	{
		if(medkits <= 0 && bullets <= 0 && !hasGun)
		{
			cout << "You have nothing in your bag" << endl;
		}
		else
		{
			cout << "You look in your bag.\n\n";
		}
		if(medkits > 0)
		{
			cout << "You have " << medkits << " medkit(s)" << endl;
		}
		if(hasGun && bullets <= 0)
		{
			cout << "You have a gun" << endl;
		}
		if(bullets > 0)
		{
			if(hasGun)
			{
				cout << "You have a gun" << endl;
				cout << "You have " << bullets << " bullet(s)" << endl;
			}
			else
			{
				cout << "You have " << bullets << " bullet(s) but no gun for them" << endl;
			}
		}
		
		cout << endl;
	}
	else if(value == 2 && hasMap)
	{
		map.DisplayMap(pos);
	}
	else if(value == 998) // debug code 999. shows map with item positions
	{
		for(int y = 0; y < 8; y++)
		{
			for(int x = 0; x < 8; x++)
			{
				cout << map.mapArray[x][y];
			}
			cout << endl;
		}
	}
	else if(value == 554) // debug code 555. shows normal map even with out finding one
	{
		map.DisplayMap(pos);
	}
	else if(value == 9998) // debug code 9999. shows room value
	{
		cout << map.GetRoom(pos);
	}
	else
	{
		cout << "Invalid Option" << endl;
	}

}

int Player::Move() // Josh Roberts
{
	string title = "Where do you move";

	int moveCode = map.GetMoveable(pos);

	vector<string> moves = map.MovesToString(moveCode);

	int value = Menu(title, moves, moves.size());

	if(value < moves.size())
	{
		if(moves[value] == "Left")
		{
			pos[0] -= 1;
		}
		else if(moves[value] == "Up")
		{
			pos[1] -= 1;
		}
		else if(moves[value] == "Right")
		{
			pos[0] += 1;
		}
		else if(moves[value] == "Down")
		{
			pos[1] += 1;
		}
	}

	return value;
}

void Player::Hurt() // Josh Roberts
{
	health -= 1;
	cout << "You are attacked and lose health\n";

	if(medkits > 0)
	{
		medkits -= 1;
		health += 1;
		cout << "You use a medkit and recover the lost health\n";
		cout << "You now have " << medkits << " medkit(s)\n";
	}
	else if(health <= 0)
	{
		cout << "You have died\n";
		cout << "Game Over\n";
	}
}
