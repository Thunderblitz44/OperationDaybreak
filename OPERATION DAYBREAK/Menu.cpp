#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

int Menu(const string& title, const vector<string>& items, int size) // Josh Roberts
{
	/* EXAMPLE USAGE 
	std::string items[] = {"Left", "Forward", "Right"};
	std::cout << items[Menu("Where do you go" ,items, 3)] << std::endl;
	*/

	cout << title << endl << "--------------------------------------------\n";

	for(int i = 0; i < size; i++)
	{
		cout << i + 1 << " - " << items[i] << endl;
	}

	int value;
	cout << "--------------------------------------------\n" << "Choose an option: ";
	cin >> value;
	cout << endl << endl;

	return value - 1;
}
