


#include <iostream>
#include <string>
#include <vector>
#include "Header.h"

using namespace std;

int main()
{
#include <memory>
#include "Character.h"
	//namespace hgshks{//part of the base code from https://learn.ontariotechu.ca/courses/30946/assignments/184835
	int Character::count = 0;
	Character::Character() {
		cout << "Character constructor called. " << "Characters active: " << ++Character::count << "\n";
	}
	Character::~Character() { cout << "Character destructor called. " << "Characters remaining: " << --Character::count << "\n";
	}
	Player::Player1() {
		cout << "Player constructor called\n";
	}
	void Player1::speak() const {
		cout << "I need to find an exit\n";// == change this for character's speech == can be changed to a string variable, to allow for
	}
	Player::~Player1() {
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

	unique_ptr<Player1> p(new Player1());// Found using prompt in google "unique_ptr in c++" https://www.geeksforgeeks.org/unique_ptr-in-cpp/
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

		if(player.health <= 0)
		{
			play = false;
		}
	}

}


