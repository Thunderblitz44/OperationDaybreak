// OPERATION DAYBREAK.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Header.h"

using namespace std;

int main()
{
#include <memory>
#include "Character.h"
	namespace Game {//part of the base code from https://learn.ontariotechu.ca/courses/30946/assignments/184835
		int Character::count = 0;
		Character::Character() {
			cout << "Character constructor called. " << "Characters active: " << ++Character::count << "\n";
		}
		Character::~Character() { cout << "Character destructor called. " << "Characters remaining: " << --Character::count << "\n";
		}
		Player::Player() {
			cout << "Player constructor called\n";
		}
		void Player::speak() const {
			cout << "I need to find an exit\n";// == change this for character's speech == can be changed to a string variable, to allow for
		}
		Player::~Player() {
			cout << "Player destructor called. \n";
		}
		Zombie::Zombie() {
			cout << "Zombie constructor called\n";
		}
		void Zombie::speak() const {
			cout << "GRRRRRRR\n";// == change this for character's speech
		}
		Zombie::~Zombie() {
			cout << "Zombie destructor called \n";
		}
		Survivor::Survivor() {
			cout << "Survivor constructor called\n";
		}
		void Survivor::speak() const {
			cout << "I've been saved!\n";// == change this for character's speech
		}
		Survivor::~Survivor() {
			cout << "Survivor destructor called \n";
		}

		unique_ptr<Player> p(new Player());// Found using prompt in google "unique_ptr in c++" https://www.geeksforgeeks.org/unique_ptr-in-cpp/
		unique_ptr<Zombie> z(new Zombie());
		unique_ptr<Survivor> s(new Survivor());
	}
	using namespace Game;

	cout << endl;
	p->speak();// use these to speak (this uses inheritence and polymorphism)
	z->speak();
	s->speak();
	cout << endl;


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
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
