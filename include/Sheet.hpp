/* Filename   : Sheet.hpp
 * Author     : Brian Eckenrode
 * Date       : Feb 2018
 * Description: Handles all character sheet data
 */

/************************************************************/
//Macro Guard

#ifndef __SHEET_H
#define __SHEET_H

/************************************************************/
//System includes

#include <cstdlib>
#include <iostream>
#include <string>

/************************************************************/
//Local includes

#include "util/Util.hpp"
#include "objects/Info.hpp"
#include "objects/Race.hpp"
#include "objects/Class.hpp"
#include "objects/Background.hpp"
#include "objects/Stats.hpp"
#include "objects/Skills.hpp"

/************************************************************/
//Using Declarations

using std::cin;
using std::cout;
using std::string;
using std::stoi;

class Sheet
{

private:

	Info cInfo;
	Race cRace;
	Class cClass;
	Background cBkgd;
	Stats cStats;
	Skills cSkills;


public:

	Sheet()
	{
		cStats.update(cRace.getMods());
		cSkills.init(cStats.getMods());
		cSkills.setBonus(cInfo.getProfBonus());
		cSkills.update(cRace.getProfs());
		cSkills.update(cClass.getProfs());
		cSkills.update(cBkgd.getProfs());
	}

	void
	printSheet()
	{
		cout << endl;
		cout << "*** Character Info ***" << endl;
		cout << "Character Name : " << cInfo.getName() << endl;
		printf( "Class & Level  : %s (%d)\n", cClass.getName().c_str(), cInfo.getLevel());
		cout << "Race           : " << cRace.getName() << endl;
		cout << "Background     : " << cBkgd.getName() << endl;
		cout << "Alignment      : " << cInfo.getAlign() << endl;
		cout << "Player Name    : " << cInfo.getPlayer() << endl;
		cout << endl;
		cout << "Armor Class    : " << "!- TO BE IMPLEMENTED -!" << endl;
		printf ("Initiative Mod : %+d\n", cStats.getStatMod(1));
		printf ("Base Speed     : %d\n", cRace.getSpeed());
		printf ("Proficiency    : %+d\n", cInfo.getProfBonus());
		cout << endl;
		cout << ("****** Abilities *****") << endl;
		for(int i = 0; i != 6; ++i)
		{
			printf("%s : %2d (%+d)\n", 
				cStats.getStatName(i).c_str(), cStats.getStat(i), cStats.getStatMod(i));
		}
		cout << endl;
		cout << ("******* Skills *******") << endl;
		for(int i = 0; i != 18; ++i)
		{
			printf("%s : %+d (%s)\n", skillNames[i].c_str(), cSkills.getMod(i),
				(cSkills.getSkill(i) > 0 ? "X" : " "));
		}
		cout << endl;
	}
};

#endif