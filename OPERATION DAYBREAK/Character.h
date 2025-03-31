//File is in a .h file
/*
Honour Code

I, Alexander Bean, affirm that all work submitted for this midterm is my own. I have not collaborated with
others, received unauthorized assistance, or used AI tools without proper acknowledgment. Any authorized resources,
including reference materials and Large Language Models (LLMs), have been explicitly credited.
If I included code or text from others or LLMs, I have clearly documented the source, including the prompt, LLM
name, and version. My submission represents my own understanding and effort; AI tools have only been used as a
supplementary aid, not to generate entire answers.
I understand that failure to credit sources, unauthorized collaboration, or reliance on LLMs for complete answers
constitutes academic misconduct. I have not and will not share or distribute any part of this midterm during or after
the exam.
I consent to plagiarism detection measures and acknowledge that violations may result in penalties, including a grade
of zero or disciplinary action. By typing my name above, I commit to academic integrity and accept full responsibility
for my work.
*/


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
    class Player : public Character { //constructor class changed to fit the theme of final project
        public:
        Player();
        virtual void speak() const override; // ==added virtual function==
        ~Player();
    };
    class Zombie final : public Character { //Using final prevents further overriding == Final is used ==
        //constructor class changed to fit the theme of final project
        public:
        Zombie();
        virtual void speak() const override; // ==added virtual function==
        ~Zombie();
    };
    class Survivor final : public Player { //Using final prevents further inheritance == Final is used ==
        //constructor class changed to fit the theme of final project
        public:
        Survivor();
        virtual void speak() const; // ==added virtual function==
        ~Survivor();
    };
}
#endif //CHARACTER_H
