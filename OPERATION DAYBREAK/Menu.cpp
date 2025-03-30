#include <iostream>
#include <string>

using namespace std;

int Menu(string title, string items[], int size) // Josh Roberts
{
	/* EXAMPLE USAGE 
	std::string items[] = {"Left", "Forward", "Right"};
	std::string title = "Where do you go?";
	std::cout << items[Menu(title ,items, 3)] << std::endl;
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

int Menu(string items[], int size) // Josh Roberts
{
	/* EXAMPLE USAGE
	std::string items[] = {"first", "second", "third"};
	std::cout << items[Menu(items, 3)] << std::endl;
	*/

	cout << "--------------------------------------------\n";

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