/* Filename   : Race.hpp
 * Author     : Brian Eckenrode
 * Date       : Feb 2018
 * Description: Race object, handles racial data
 */

/************************************************************/
//Macro Guard

#ifndef __RACE_H
#define __RACE_H

/************************************************************/
//System includes

#include <vector>
#include <cstdlib>
#include <iostream>
#include <string>

/************************************************************/
//Local includes

#include "../containers/RaceList.hpp"
#include "Skills.hpp"
#include "../util/Util.hpp"

/************************************************************/
//Using Declarations

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Race
{

private:

	int rID;
	string rName;
	int rSpeed;
	vector<int> rMods;
	vector<int> rProfs;
	vector<int> rLangs;
	bool rSubraces;

	void
	init()
	{
		RaceList list;
		int choice;
		int bound = list.size();

		cout << endl;

		
		for(int i = 0; i != bound; ++i)
		{
			printf("(%2d) : %s\n", (i + 1), list.select(i).getName().c_str());
		}

		choice = input("Choose a race.", bound);

		--choice;
		this->rID = list.select(choice).getID();
		this->rName = list.select(choice).getName();
		this->rSpeed = list.select(choice).getAtt(1);
		this->rMods = list.select(choice).getList(1);
		this->rProfs = chooseProfs("Race", list.select(choice).getList(2));
		this->rLangs = list.select(choice).getList(3);
		this->rSubraces = list.select(choice).getBool();
	}

public:

	Race(int idIn, string nameIn, int speedIn, vector<int> modsIn,
		vector<int> profsIn, vector<int> langsIn, bool subIn)
	: rID(idIn), rName(nameIn), rSpeed(speedIn), rMods(modsIn),
		rProfs(profsIn), rLangs(langsIn), rSubraces(subIn)
	{
	}

	Race()
	{
		init();
	}

	int
	getID()
	{
		return rID;
	}

	string
	getName()
	{
		return rName;
	}

	int
	getSpeed()
	{
		return rSpeed;
	}

	vector<int>
	getMods()
	{
		return rMods;
	}

	vector<int>
	getProfs()
	{
		return rProfs;
	}

	vector<int>
	getLangs()
	{
		return rLangs;
	}

	bool
	getSubraces()
	{
		return rSubraces;
	}
};

#endif