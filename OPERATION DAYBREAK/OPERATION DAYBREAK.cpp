


#include <iostream>
#include <string>
#include <vector>
#include "Header.h"
#include "Character.h"

using namespace std;
using namespace Game;
#include <memory>
//Alex Bean
namespace Game {//part of the base code from https://learn.ontariotechu.ca/courses/30946/assignments/184835
	int Character::count = 0;
	Character::Character() {

	}
	Character::~Character() {

	}
	Player1::Player1() {

	}
	void Player1::speak() const {
		cout << "I need to find an exit\n";// == change this for character's speech == can be changed to a string variable, to allow for
	}
	Player1::~Player1() {

	}
	Zombie::Zombie() {

	}
	void Zombie::speak() const {
		cout << "GRRRRRRR\n";// == change this for character's speech
	}
	Zombie::~Zombie() {

	}
	Survivor::Survivor() {

	}
	void Survivor::speak() const {
		cout << "I've been saved!\n";// == change this for character's speech
	}
	Survivor::~Survivor() {

	}
}

int main()
{

	//TODO: add enemies to map

	unique_ptr<Player1> p(new Player1());// Found using prompt in google "unique_ptr in c++" https://www.geeksforgeeks.org/unique_ptr-in-cpp/
	unique_ptr<Zombie> z(new Zombie());
	unique_ptr<Survivor> s(new Survivor());

	//cout << endl;
	//p->speak();// use these to speak (this uses inheritence and polymorphism)
	//z->speak();
	//s->speak();
	//cout << endl;
	


	while(true)
	{


	//Josh Roberts
		srand(time(0)); // Seed the random generator

		Map map;

		Player player(map);
		bool play = true;

		cout << "You are a soldier on a mission to find and save a traped solder in side a abandoned facility\n" << "It is your job to get them out safely. Good luck.\n\n";

		while(play)
		{
			player.turn();
			if(player.pos[0] == map.goalPos[0] && player.pos[1] == map.goalPos[1])
			{
				cout << "You have found your target\n";

				cout << "Target: Great you made it lets get out of here\n";

				cout << "You have completed your mission\n";

				cout << "Congratulations!\n\n\n\n\n";



				play = false;
			}

			if(player.health <= 0)
			{
				play = false;
			}
		}
	}
}


