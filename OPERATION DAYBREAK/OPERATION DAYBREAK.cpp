


#include <iostream>
#include <string>
#include <vector>
#include "Header.h"

using namespace std;

int main()
{
	srand(time(0)); // Seed the random generator

	Map map;

	Player player(map);
	bool play = true;

	while(play)
	{
		player.turn();
		if(player.pos[0] == map.goalPos[0] && player.pos[1] == map.goalPos[1])
		{
			cout << "You have found your target\n";

			cout << "Target: Great you made it lets get out of here\n";

			cout << "You have completed your mission\n";

			cout << "Congratulations!\n";

			play = false;
		}

		if(player.health <= 0)
		{
			play = false;
		}
	}

}


