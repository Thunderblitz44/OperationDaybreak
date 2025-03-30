#ifndef HEADER_H
#define HEADER_H

#include <string>
#include <vector>

class Map // Josh Roberts
{
public:
	int startPos[2] = {0, 0}; // x, y
	int goalPos[2] = {6, 6}; // x, y
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

	Map(); // constructor

	int GetMoveable(int[2]); // get the moveable directions

    std::vector<std::string> MovesToString(int); // convert the moveable directions to a string[]
};

int Menu(const std::string&, const std::vector<std::string>&, int); // Josh Roberts

#endif // HEADER_H
