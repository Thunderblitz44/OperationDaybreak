#include <iostream>
#include <string>
#include <vector>
#include "Header.h"

using namespace std;


Map::Map() // Josh Roberts
{
    int total = 0;
    while(total < 25)
    {
        total = 0;
        for(int i = 1; i < 7; i++)
        {
            for(int j = 1; j < 7; j++)
            {
                mapArray[i][j] = (rand() % 3 == 0) ? 0 : 1;
                total += mapArray[i][j];
            }
        }
    }

	mapArray[startPos[0]][startPos[1]] = 1;
	mapArray[goalPos[0]][goalPos[1]] = 1;

}

int Map::GetMoveable(int pos[2]) // Josh Roberts
{
	int value = 0;
	if(pos[0] != 0 )
	{
		if(mapArray[pos[0] - 1][pos[1]] == 1)
		{
			value += 1;
		}
	}
    if(pos[1] != 0)
    {
        if(mapArray[pos[0]][pos[1] - 1] == 1)
        {
            value += 2;
        }
    }
    if(pos[0] != 7)
    {
        if(mapArray[pos[0] + 1][pos[1]] == 1)
        {
            value += 4;
        }
    }
    if(pos[1] != 7)
    {
        if(mapArray[pos[0]][pos[1] + 1] == 1)
        {
            value += 8;
        }
    }

	return value;
}

vector<string> Map::MovesToString(int value) // Josh Roberts
{
    vector<string> moves;  

    if(value & 1)
    {  
        moves.push_back("Left");
    }
    if(value & 2)
    {  
        moves.push_back("Up");
    }
    if(value & 4)
    {  
        moves.push_back("Right");
    }
    if(value & 8)
    {  
        moves.push_back("Down");
    }

    return moves;
}

