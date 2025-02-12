// OPERATION DAYBREAK.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";
}

/*
Make a text based zombie survival game. Add functionality of:

1. surival systems: water, hunger, health, sanity
2. Core Game Loop: give prompts to the player of a deciding path (possibly chosen from a random number of options), encounterable zombies
2. Cont. Findable loot, survive long enough to find the high ranking official in the building you are in, or die part-way through
3. OPTIONAL: make the game into a roguelike. Add powerup features like damage multipliers, hunger/water drain nullifications, weapon upgrades


reminds me of the Oregon Trail game
https://www.visitoregon.com/the-oregon-trail-game-online/


Ways to implement this:

Have initial base stats, this can be a global constant because the base shouldnt change
Have a pseudo inventory system (just number of resources the player has)
Inventory system will have maximums of each item the player can carry (EX: MAX. 3 FOOD, MAX. 5 WATER)


Prompt the player with the scenario they are in, and how to play the game. (have number options or Y/N options)

Have a Choice() function that prompts the player with choices of what to do next. In Choice() we can have a random number generator to 
Pick a random event that will lead to food and water, what will lead to zombies, or closer to the person you are trying to save
Within Choice() it will ask the player for an input of an int (1,2,3) or sting/char (Y/N) which will decide the path the player takes
There will also be 

A Logic() function is where the logic behind the player's health and stats are tracked/changed, before each prompt the player's stats will be 
Printed to the screen for the player to see. 

*/



//stuff below is from initial commit 🧛‍♂️

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
