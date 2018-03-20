/* Filename   : RaceList.hpp
 * Author     : Brian Eckenrode
 * Date       : Feb 2018
 * Description: Stores all possible race options
 */

/************************************************************/
//Macro Guard

#ifndef __RACELIST_H
#define __RACELIST_H

/************************************************************/
//System includes

#include <vector>
#include <cstdlib>
#include <iostream>
#include <string>

/************************************************************/
//Local includes

#include "Values.hpp"

/************************************************************/
//Using Declarations

using std::vector;
using std::string;

class RaceList
{

private:

	vector<Values> list;

public:

	RaceList()
	{
		list.push_back(Values(0, "Aarakocra", 25, 0,
			{0, 2, 0, 0, 1, 0}, {}, {5, 0, 3}, false));
		list.push_back(Values(1, "Aasimar", 30, 0, 
			{0, 0, 0, 0, 1, 2}, {}, {5, 4}, true));
		list.push_back(Values(2, "Bugbear", 30, 0,
			{2, 1, 0, 0, 0, 0}, {}, {5, 13}, false));
		list.push_back(Values(3, "Dragonborn", 30, 0,
			{2, 0, 0, 0, 0, 1}, {}, {5, 7}, true));
		list.push_back(Values(4, "Dwarf", 25, 0,
			{0, 0, 2, 0, 0, 0}, {}, {5, 9}, true));
		list.push_back(Values(5, "Elf", 30, 0,
			{0, 2, 0, 0, 0, 0}, {11}, {5, 10}, true));
		list.push_back(Values(6, "Firbolg", 30, 0,
			{1, 0, 0, 0, 2, 0}, {}, {5, 10, 11}, false));
		list.push_back(Values(7, "Genasi", 30, 0,
			{0, 0, 2, 0, 0, 0}, {}, {5, 19}, true));
		list.push_back(Values(8, "Gnome", 25, 0,
			{0, 0, 0, 2, 0, 0}, {}, {5, 12}, true));
		list.push_back(Values(9, "Goblin", 30, 0,
			{0, 2, 1, 0, 0, 0}, {}, {5, 13}, false));
		list.push_back(Values(10, "Goliath", 30, 0,
			{2, 0, 1, 0, 0, 0}, {3}, {5, 11}, false));
		list.push_back(Values(11, "Half-Elf", 30, 0,
			{0, 0, 0, 0, 0, 2}, {2, 0, 1, 2, 3, 4, 5, 6, 7,
			8, 9, 10, 11, 12, 13, 14, 15, 16, 17}, {5, 10}, false));
		list.push_back(Values(12, "Halfling", 25, 0,
			{0, 2, 0, 0, 0, 0}, {}, {5, 15}, true));
		list.push_back(Values(13, "Half-Orc", 30, 0,
			{2, 0, 1, 0, 0, 0}, {7}, {5, 18}, false));
		list.push_back(Values(14, "Hobgoblin", 30, 0,
			{0, 0, 2, 1, 0, 0}, {}, {5, 13}, false));
		list.push_back(Values(15, "Human", 30, 0,
			{1, 1, 1, 1, 1, 1}, {}, {5}, false));
		list.push_back(Values(16, "Kenku", 30, 0,
			{0, 2, 0, 0, 1, 0}, {2, 0, 4, 15, 16}, 
			{5, 3}, false));
		list.push_back(Values(17, "Kobold", 30, 0,
			{-2, 2, 0, 0, 0, 0}, {}, {5, 7}, false));
		list.push_back(Values(18, "Lizardfolk", 30, 0,
			{0, 0, 2, 0, 1, 0}, {2, 1, 10, 11, 16, 17}, 
			{5, 7}, false));
		list.push_back(Values(19, "Orc", 30, 0,
			{2, 0, 1, 0, 0, 0}, {7}, {5, 18}, false));
		list.push_back(Values(20, "Tabaxi", 30, 0,
			{0, 2, 0, 0, 0, 1}, {11, 16}, {5}, false));
		list.push_back(Values(21, "Tiefling", 30, 0,
			{0, 0, 0, 1, 0, 2}, {}, {5, 17}, true));
		list.push_back(Values(22, "Tortle", 30, 0,
			{2, 0, 0, 0, 1, 0}, {17}, {5, 2}, true));
		list.push_back(Values(23, "Triton", 30, 0,
			{1, 0, 1, 0, 0, 1}, {}, {5, 19}, true));
		list.push_back(Values(24, "Yuan-Ti Pureblood", 30, 0,
			{0, 0, 0, 1, 0, 2}, {}, {5, 1, 7}, false));
	}

	int
	size()
	{
		return list.size();
	}

	Values
	select(int i)
	{
		return list[i];
	}
};

#endif