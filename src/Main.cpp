#include <iostream>
#include "conio.h"
#include <string>
#include <vector>

using namespace std;

void printArray(vector<string> Array)
{
	for (int i = 0; i < Array.size(); i++)
	{
		cout << Array[i];
	}
	cout << "\n";
}

void clearScreen()
{
	system("CLS");
}

int main() {
	int currentpos = 0;
	bool running = true;
	bool isLeft = false;
	int level = 0;
	bool isRight = false;
	vector <string> world = { { " ", "#" }, {" ", ""} };
	char ch;

	cout << "Game Started" << endl;
	while (running)
	{
		printArray(world);

		ch = _getch();;

		if (ch == 'd')
		{
			world[0] += " ";
		}

		if (ch == 'a')
		{
			world[0].erase(world[0].begin());
		}

		clearScreen();
	}
	return 0;
}