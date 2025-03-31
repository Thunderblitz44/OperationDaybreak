#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
using namespace std;

namespace Game {//Part of the given code from https://learn.ontariotechu.ca/courses/30946/assignments/184835
    class Character {
    public:
        static int count; // Static member variable
        Character();
        virtual void speak() const = 0; // Pure virtual function
        virtual ~Character();
    };
    class Player1 : public Character { //constructor class changed to fit the theme of final project
    public:
        Player1();
        virtual void speak() const override; // ==added virtual function==
        ~Player1();
    };
    class Zombie final : public Character { //Using final prevents further overriding == Final is used ==
        //constructor class changed to fit the theme of final project
    public:
        Zombie();
        virtual void speak() const override; // ==added virtual function==
        ~Zombie();
    };
    class Survivor final : public Player1 { //Using final prevents further inheritance == Final is used ==
        //constructor class changed to fit the theme of final project
    public:
        Survivor();
        virtual void speak() const; // ==added virtual function==
        ~Survivor();
    };
}
#endif //CHARACTER_H
