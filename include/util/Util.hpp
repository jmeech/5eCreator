/* Filename   : Util.hpp
 * Author     : Brian Eckenrode
 * Date       : Feb 2018
 * Description: Utility functions
 */

/************************************************************/
//Macro Guard

#ifndef __UTIL_H
#define __UTIL_H

/************************************************************/
//System includes

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

/************************************************************/
//Local includes

/************************************************************/
//Using Declarations

using std::cin;
using std::cout;
using std::endl;
using std::invalid_argument;
using std::string;
using std::stoi;
using std::vector;

vector<string> skillNames = {
	"Acrobatics     ",
 	"Animal Handling",
 	"Arcana         ",
 	"Athletics      ",
 	"Deception      ",
 	"History        ",
 	"Insight        ",
 	"Intimidation   ",
 	"Investigation  ",
 	"Medicine       ",
 	"Nature         ",
 	"Perception     ",
	"Performance    ",
	"Persuasion     ",
	"Religion       ",
	"Sleight of Hand",
	"Stealth        ",
	"Survival       "
};

string
input(string prompt)
{
	string in;
	cout << endl << prompt << endl << "> ";
	getline(cin, in);

	return in;
}

int
input(string prompt, int bound)
{
	while(true)
	{
		int value;
		try
		{
			string raw = input(prompt);
			value = stoi(raw);
		}
		catch(const invalid_argument& e)
		{
			cout << endl << "Could not parse int";
			value = -1;
		}
		if(value > 0 && value <= bound)
		{
			return value;
		}
		cout << endl << "Invalid input.";
	}
}

vector<int>
chooseProfs(string type, vector<int> profsIn)
{
	int choice;

	if(profsIn.size() == 0)
	{
		return profsIn;
	}

	vector<int> newProfs(profsIn[0], 0);

	cout << endl;

	if(profsIn.size() > 2)
	{

		for(int i = 0; i != newProfs.size(); ++i)
		{
			for(int j = 1; j != profsIn.size(); ++j)
			{
				if(profsIn[j] != -1)
				{
					printf("(%2d) : %s\n", j, skillNames[profsIn[j]].c_str());
				}
			}

			cout << endl << "Select a " + type + " proficiency." << endl;
			cout << "You have " << (newProfs.size() - i) << " choices left.";

			while(true)
			{
				choice = input("", profsIn.size());

				if(profsIn[choice] != -1)
				{
					break;
				}
				cout << "Invalid Choice.";
				choice = 0;
			}

			newProfs[i] = profsIn[choice];
			profsIn[choice] = -1;
		}
	}
	else
	{
		newProfs = profsIn;
	}
	return newProfs;
}

vector<int>
concat(vector<int> a, vector<int> b)
{
	for(int i = 0; i != b.size(); ++i)
	{
		a.push_back(b[i]);
	}
	return a;
}

#endif