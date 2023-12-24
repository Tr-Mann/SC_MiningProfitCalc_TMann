//===========================================================================
// Author: Tristan Mann
// Date: December 23, 2023.
// Desc: This is a profit calculation for mining in the game "Star Citizen".
//===========================================================================

#include <iostream>
#include <iomanip>
using namespace std;

void mainMenu();
bool runCheck(int);
int validInput(int);
struct minerals
{
	string name;
	double massToSCU;
	int price;
};
int main()
{
	bool isRunning = true;

}

void mainMenu()
{
	int input;
	cout << "| Mining Calculator |" << endl 
		<< "|___________________|" << endl
		<< "| 1. Rock to price  |" << endl
		<< "| 2. Load Profit    |" << endl
		<< "|___________________|" << endl;
	input = validInput(2);
	//If input is 0 runcheck will return false
	runCheck(input);
	if (input == 0)
	{
		
	}
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
bool runCheck(int num)
{
	if (num == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}