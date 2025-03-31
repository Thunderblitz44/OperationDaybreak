#ifndef HEADER_H
#define HEADER_H

#include <string>
#include <vector>

class Map // Josh Roberts
{
public:
	int startPos[2] = {0, 7}; // x, y
	int goalPos[2] = {6, 1}; // x, y
	int mapArray[8][8] = {
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1}
    };
    

	Map();

	int GetMoveable(int[2]); // get the moveable directions

	void DisplayMap(int[2]); // display the map

    std::vector<std::string> MovesToString(int); // convert the moveable directions to a string[]

	int GetRoom(int[2]);
};

class Player // Josh Roberts
{
public:
	int pos[2] = {0, 7}; // x, y
	int health = 3;
	bool hasMap = false;

	int bullets = 0;
	int medkits = 0;
	bool hasGun = false;


    int mapLog[8][8] = {
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1}
    };

	Map map;

	Player(Map&);
    
	void turn();

    int Move();

    void Hurt();
};


int Menu(const std::string&, const std::vector<std::string>&, int); // Josh Roberts

#endif // HEADER_H
