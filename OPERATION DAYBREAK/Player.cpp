#include <iostream>
#include <string>
#include <vector>
#include "Header.h"

using namespace std;


Player::Player() // Josh Roberts
{

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
