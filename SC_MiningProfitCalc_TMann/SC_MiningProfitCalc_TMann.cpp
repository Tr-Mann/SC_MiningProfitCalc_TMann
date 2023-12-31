//===========================================================================
// Author: Tristan Mann
// Date: December 23, 2023.
// Desc: This is a profit calculation for mining in the game "Star Citizen".
//===========================================================================

#include <iostream>
#include <iomanip>
using namespace std;


struct mineral
{
	string name;
	int value;
	double massToScu;
};

void rockToProf(mineral);
mineral getMin(mineral[]);
double loadProfit(mineral[]);
void minList(mineral[]);
void mainMenu();
bool runCheck();
int validInput(int);
int main()
{
	bool isRunning = true;
	int input;

	while (isRunning)
	{
		mineral ores[10];
		ores[0] = { "Quatanium", 23700, 682};
		ores[1] = { "Bexalite", 7981, 231};
		ores[2] = { "Gold", 7484, 644};
		ores[3] = { "Taranite", 7686, 340};
		ores[4] = { "Agricium", 2579, 240};
		ores[5] = {"Beryl", 2710, 92};
		ores[6] = {"Borase", 3532,  150};
		ores[7] = {"Hephestanite", 2668, 107};
		ores[8] = { "Laranite", 2887, 384 };
		mainMenu();
		input = validInput(3);
		if (input == 0)
		{
			isRunning = runCheck();
		}
		else if (input == 1)
		{
			//Rock to price menu
			rockToProf(getMin(ores));
		}
		else if (input == 2)
		{
			//Load profit menu
			loadProfit(ores);
		}
		else
		{
			//mineral list
			minList(ores);
		}
	}
}

void mainMenu()
{
	system("CLS");

	cout << "| Mining Calculator |" << endl 
		<< "|___________________|" << endl
		<< "| 1. Rock to price  |" << endl
		<< "| 2. Load Profit    |" << endl
		<< "| 3. Mineral List   |" << endl
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
mineral getMin(mineral ores[])
{
	int input;

	system("CLS");
	cout << "What mineral are you mining?" << endl
		<< "1. Quatanium" << endl
		<< "2. Bexalite" << endl
		<< "3. Gold" << endl
		<< "4. Taranite" << endl
		<< "5. Agricium" << endl
		<< "6. Beryl" << endl
		<< "7. Borase" << endl
		<< "8. Hephestanite" << endl
		<< "9. Laranite" << endl;
	cin >> input;
	while (input < 1 || input > 9)
	{
		cout << "Invalid input try again." << endl;
		cin >> input;
	}

	switch (input)
	{
	case 1: return ores[0];
		break;
	case 2: return ores[1];
		break;
	case 3: return ores[2];
		break;
	case 4: return ores[3];
		break;
	case 5: return ores[4];
		break;
	case 6: return ores[5];
		break;
	case 7: return ores[6];
		break;
	case 8: return ores[7];
		break;
	case 9: return ores[8];
		break;
	}
}
void rockToProf(mineral ore)
{
	int input;
	double profit;
	double scus;
	double mass;
	double percentage;
	cout << "Mining: " << ore.name << " what is the mass of the rock you are mining?" << endl;
	cin >> mass;
	cout << "What percentage " << ore.name << " is the " << mass << " mass rock you are mining?" << endl;
	cin >> percentage;

	percentage = percentage / 100;

	scus = ((mass * percentage) / ore.massToScu);
	profit = scus * ore.value;
	
	cout << "SCUS minable: " << scus << endl
		<< "Profits: " << profit << " auec" << endl
		<< "Type 0 to return to main menu.";
	cin >> input;
}

double loadProfit(mineral ores[])
{
	bool adding = true;
	int input;
	double scus;
	double profit = 0;
	system("CLS");
	while (adding = true)
	{
		cout << "What mineral are you adding?" << endl
			<< "1. Quatanium" << endl
			<< "2. Bexalite" << endl
			<< "3. Gold" << endl
			<< "4. Taranite" << endl
			<< "5. Agricium" << endl
			<< "6. Beryl" << endl
			<< "7. Borase" << endl
			<< "8. Hephestanite" << endl
			<< "9. Laranite" << endl;
		cin >> input;

		while (input < 1 || input > 9)
		{
			cout << "Invalid input try again." << endl;
			cin >> input;
		}
		switch (input)
		{
		case 1: cout << "How many SCUS of " << ores[0].name << " do you have. ";
			cin >> scus;
			profit += ores[0].value * scus;
			break;
		case 2: cout << "How many SCUS of " << ores[1].name << " do you have. ";
			cin >> scus;
			profit += ores[1].value * scus;
			break;
		case 3: cout << "How many SCUS of " << ores[2].name << " do you have. ";
			cin >> scus;
			profit += ores[2].value * scus;
			break;
		case 4: cout << "How many SCUS of " << ores[3].name << " do you have. ";
			cin >> scus;
			profit += ores[3].value * scus;
			break;
		case 5: cout << "How many SCUS of " << ores[4].name << " do you have. ";
			cin >> scus;
			profit += ores[4].value * scus;
			break;
		case 6: cout << "How many SCUS of " << ores[5].name << " do you have. ";
			cin >> scus;
			profit += ores[5].value * scus;
			break;
		case 7: cout << "How many SCUS of " << ores[6].name << " do you have. ";
			cin >> scus;
			profit += ores[6].value * scus;
			break;
		case 8: cout << "How many SCUS of " << ores[7].name << " do you have. ";
			cin >> scus;
			profit += ores[7].value * scus;
			break;
		case 9: cout << "How many SCUS of " << ores[8].name << " do you have. ";
			cin >> scus;
			profit += ores[8].value * scus;
			break;
		}

		cout << "Add another mineral? (0: no/1: yes)" << endl;
		cin >> input;

		while (input < 0 || input > 1)
		{
			cout << "Invalid input try again (0: no/1: yes)" << endl;
			cin >> input;
		}

		if (input == 0)
		{
			cout << "Total load profits: " << profit << " type 0 to return to main menu." << endl;
			cin >> input;
			adding = false;
			return profit;
		}
		else 
		{
			cout << "Adding next mineral." << endl;
		}
	}
}

void minList(mineral ores[])
{
	short int input;

	system("CLS");
	cout << "Mineral List: " << endl
		<< setw(12) << ores[0].name << "| price " << setw(7) << ores[0].value << "| mass to scu " << setw(4) << ores[0].massToScu << endl
		<< setw(12) << ores[1].name << "| price " << setw(7) << ores[1].value << "| mass to scu " << setw(4) << ores[1].massToScu << endl
		<< setw(12) << ores[2].name << "| price " << setw(7) << ores[2].value << "| mass to scu " << setw(4) << ores[2].massToScu << endl
		<< setw(12) << ores[3].name << "| price " << setw(7) << ores[3].value << "| mass to scu " << setw(4) << ores[3].massToScu << endl
		<< setw(12) << ores[4].name << "| price " << setw(7) << ores[4].value << "| mass to scu " << setw(4) << ores[4].massToScu << endl
		<< setw(12) << ores[5].name << "| price " << setw(7) << ores[5].value << "| mass to scu " << setw(4) << ores[5].massToScu << endl
		<< setw(12) << ores[6].name << "| price " << setw(7) << ores[6].value << "| mass to scu " << setw(4) << ores[6].massToScu << endl
		<< setw(12) << ores[7].name << "| price " << setw(7) << ores[7].value << "| mass to scu " << setw(4) << ores[7].massToScu << endl
		<< setw(12) << ores[8].name << "| price " << setw(7) << ores[8].value << "| mass to scu " << setw(4) << ores[8].massToScu << endl;
	cout << "Type 0 to return to main menu: " << endl;
	cin >> input;
}