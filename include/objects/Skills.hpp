/* Filename   : Skills.hpp
 * Author     : Brian Eckenrode
 * Date       : Feb 2018
 * Description: Skills object, handles character skills and proficiencies
 */

/************************************************************/
//Macro Guard

#ifndef __SKILLS_H
#define __SKILLS_H

/************************************************************/
//System includes

#include <vector>
#include <cstdlib>
#include <iostream>
#include <string>

/************************************************************/
//Local includes

#include "Stats.hpp"
#include "../util/Util.hpp"

/************************************************************/
//Using Declarations

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;
using std::vector;

class Skills
{

private:

	/* ( 0) Acrobatics (Dex)
	 * ( 1) Animal Handling (Wis)
	 * ( 2) Arcana (Int)
	 * ( 3) Athletics (Str)
	 * ( 4) Deception (Cha)
	 * ( 5) History (Int)
	 * ( 6) Insight (Wis)
	 * ( 7) Intimidation (Cha)
	 * ( 8) Investigation (Int)
	 * ( 9) Medicine (Wis)
	 * (10) Nature (Int)
	 * (11) Perception (Wis)
	 * (12) Performance (Cha)
	 * (13) Persuasion (Cha)
	 * (14) Religion (Int)
	 * (15) Sleight of Hand (Dex)
	 * (16) Stealth (Dex)
	 * (17) Survival (Dex)
	 */

	int bonus = 2;

 	vector<int> sList = {0, 0, 0, 0, 0, 0,
 		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

 	vector<int> sMods = {0, 0, 0, 0, 0, 0,
 		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

 	vector<int> sAbilities = {1, 4, 3, 0, 5, 
 		3, 4, 5, 3, 4, 3, 4, 5, 5, 3, 1, 1, 1};

public:

	Skills()
	{	
	}

	void
	init(vector<int> v)
	{
		for(int i = 0; i != 18; ++i)
		{
			sMods[i] = v[sAbilities[i]];
		}
	}

	void
	setBonus(int i)
	{
		bonus = i;
	}

	void
	update(vector<int> mods)
	{
		for(int i = 0; i != mods.size(); ++i)
		{
			addProficiency(mods[i]);
		}
	}

	void
	addProficiency(int i)
	{
		if(sList[i] < 1)
		{
			sList[i] = 1;
			sMods[i] += bonus;
		}
	}

	void
	addExpertise(int i)
	{
		if(sList[i] != 2)
		{
			sList[i] = 2;
			sMods[i] += (2 * bonus);
		}
	}

	int
	getSkill(int i)
	{
		return sList[i];
	}

	int
	getMod(int i)
	{
		return sMods[i];
	}

	int
	getAbility(int i)
	{
		return sAbilities[i];
	}

	vector<int>
	getSkills()
	{
		return sList;
	}
};

#endif