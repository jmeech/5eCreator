/* Filename   : Class.hpp
 * Author     : Brian Eckenrode
 * Date       : Feb 2018
 * Description: Class object, handles class data
 */

/************************************************************/
//Macro Guard

#ifndef __CLASS_H
#define __CLASS_H

/************************************************************/
//System includes

#include <vector>
#include <cstdlib>
#include <iostream>
#include <string>

/************************************************************/
//Local includes

#include "../containers/ClassList.hpp"
#include "../util/Util.hpp"

/************************************************************/
//Using Declarations

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Class
{

private:

	int cID;
	string cName;
	int cHitDie;
	vector<int> cProfs;
	vector<int> cSaves;
	bool cSpells;

	void
	init()
	{
		ClassList list;
		int choice;
		int bound = list.size();

		cout << endl;

		
		for(int i = 0; i != bound; ++i)
		{
			printf("(%2d) : %s\n", (i + 1), list.select(i).getName().c_str());
		}

		choice = input("Choose a class.", bound);

		--choice;
		this->cID = list.select(choice).getID();
		this->cName = list.select(choice).getName();
		this->cHitDie = list.select(choice).getAtt(1);
		this->cProfs = chooseProfs("Class", list.select(choice).getList(1));
		this->cSaves = list.select(choice).getList(2);
		this->cSpells = list.select(choice).getBool();

	}

/* Unimplemented until Skills implemented, consider moving to Utils too

	vector<int>
	chooseProfs(vector<int> profsIn)
	{
		Skills skills;
		int choice;
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
						printf("(%2d) : %s\n", j, skills.getName(profsIn[j]));
					}
				}

				cout << endl << "Select a Race proficiency." << endl;
				cout << "You have " << (newProfs.size() - i) << "choices left.";

				while(true)
				{
					choice = input("", profsIn.size());

					if(profIn[choice] != -1)
					{
						break;
					}
					cout << "Invalid Choice."
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

*/

public:

	Class(int idIn, string nameIn, int hitDieIn, vector<int> profsIn, 
		vector<int> savesIn, bool spellsIn)
	: cID(idIn), cName(nameIn), cHitDie(hitDieIn),
		cProfs(profsIn), cSaves(savesIn), cSpells(spellsIn)
	{
	}

	Class()
	{
		init();
	}

	int
	getID()
	{
		return cID;
	}

	string
	getName()
	{
		return cName;
	}

	int
	getHitDie()
	{
		return cHitDie;
	}

	vector<int>
	getProfs()
	{
		return cProfs;
	}

	vector<int>
	getSaves()
	{
		return cSaves;
	}

	bool
	getSpells()
	{
		return cSpells;
	}
};

#endif