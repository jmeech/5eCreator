/* Filename   : Stats.hpp
 * Author     : Brian Eckenrode
 * Date       : Feb 2018
 * Description: Stats object, handles character stats and modifiers
 */

/************************************************************/
//Macro Guard

#ifndef __STATS_H
#define __STATS_H

/************************************************************/
//System includes

#include <vector>
#include <cstdlib>
#include <iostream>
#include <string>

/************************************************************/
//Local includes

#include "../util/Util.hpp"
#include "../util/Dice.hpp"

/************************************************************/
//Using Declarations

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;
using std::vector;

class Stats
{

private:

	vector<string> sNames = {"Strength    ", "Dexterity   ", 
		"Constitution", "Intelligence", "Wisdom      ", "Charisma    "};
	vector<int> sList = {0, 0, 0, 0, 0, 0};

	void
	setStats()
	{
		vector<int> values;
		int choice;
		int last = 15;

		if(input("Would you like to use default values (1) or rolled stats (2) ?", 2) == 1)
		{
			values = {15, 14, 13, 12, 10, 8};
		}
		else
		{
			Dice dice;

			for(int i = 0; i != 6; ++i)
			{
				values.push_back(dice.getStat());
			}

			cout << endl << "Your rolled stats are:" << endl;
			for(int i = 0; i != 6; ++i)
			{
				printf("%d%s", values[i], (i < 5 ? ", " : "\n"));
			}
		}

		cout << endl;

		for(int i = 0; i != 5; ++i)
		{
			for (int j = 0; j != 6; ++j)
			{
				if(sList[j] == 0)
				{
					printf("(%d) : %s\n", (j + 1), sNames[j].c_str());
				}
			}

			while(true)
			{
				string prompt = "What stat would you like to set to " + 
					to_string(values[i]) + "?";
				choice = input(prompt, 6);

				choice -= 1;

				if(sList[choice] == 0)
				{
					sList[choice] = values[i];
					last -= choice;

					break;
				}
				else
				{
					cout << "Invalid Choice." << endl;
				}
			}
		}
		sList[last] = values[5];
	}

	int
	calcMod(int i)
	{
		return ((i - 10) / 2);
	}

public:

	Stats()
	{
		setStats();
	}

	int
	getStat(int i)
	{
		return sList[i];
	}

	int
	getStatMod(int i)
	{
		return calcMod(sList[i]);
	}

	vector<int>
	getMods()
	{
		vector<int> v;
		for(int i = 0; i != 6; ++i)
		{
			v.push_back(getStatMod(i));
		}

		return v;
	}

	vector<int>
	getStats()
	{
		return sList;
	}

	string
	getStatName(int i)
	{
		return sNames[i];
	}

	void
	update(vector<int> mods)
	{
		for(int i = 0; i != 6; ++i)
		{
			sList[i] += mods[i];
		}
	}
};

#endif