//===========================================================================
// Author: Tristan Mann
// Date: December 23, 2023.
// Desc: This is a profit calculation for mining in the game "Star Citizen".
//===========================================================================

#include <iostream>
#include <iomanip>
using namespace std;

void mainMenu();
bool runCheck();
int validInput(int);
void display();
int main()
{
	bool isRunning = true;
	int input;

	while (isRunning)
	{
		mainMenu();
		input = validInput(2);
		if (input == 0)
		{
			isRunning = runCheck();
		}
		else if (input == 1)
		{
			//Rock to price menu
		}
		else
		{
			//Load profit menu
		}
	}
}

void mainMenu()
{
	int input;

	system("CLS");

	cout << "| Mining Calculator |" << endl 
		<< "|___________________|" << endl
		<< "| 1. Rock to price  |" << endl
		<< "| 2. Load Profit    |" << endl
		<< "|___________________|" << endl;
}

int validInput(int max)
{
	int input;
	cout << "Select from options above, or type 0 to quit program." << endl;
	cin >> input;

	while (input < 0 || input > max)
	{
		cout << "Invalid input please select from the options above or type 0 to quit program." << endl;
		cin >> input;
	}
	return input;
}
//This function will check if the user wants to continue running the program.
bool runCheck()
{
	string input;
	system("CLS");
	cout << "Do you wish to quit program? (y/n)" << endl;
	cin >> input;
	while (input != "y" && input != "n")
	{
		cout << "Invalid input please try again (y/n)" << endl;
		cin >> input;
	}
	if (input == "y")
	{
		return false;
	}
	else
	{
		return true;
	}
}
//This fucntion will display output of numbers from other fucntions eventually
void display()
{

}