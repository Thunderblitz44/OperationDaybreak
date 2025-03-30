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

	vector<string> options = {"Search", "Go Back", "Open Your Bag"};

	int value = Menu(title, options, options.size());

	if(value == 0)
	{
		//search
	}
	else if(value == 1)
	{
		//go back
	}
	else if(value == 2)
	{
		cout << "You have no items" << endl;
	}
	else if(value == 3)
	{
		map.DisplayMap(pos);
	}
	else
	{
		cout << "Invalid Option" << endl;
	}

}

int Player::Move(Map& map) // Josh Roberts
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
