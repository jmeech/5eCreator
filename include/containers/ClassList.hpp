/* Filename   : ClassList.hpp
 * Author     : Brian Eckenrode
 * Date       : Feb 2018
 * Description: Stores all possible class options
 */

/************************************************************/
//Macro Guard

#ifndef __CLASSLIST_H
#define __CLASSLIST_H

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

class ClassList
{

private:

	vector<Values> list;

public:

	ClassList()
	{

		list.push_back(Values(0, "Barbarian", 12, 0,
			{2, 1, 3, 7, 10, 11, 17}, {0, 2}, {}, false));
		list.push_back(Values(1, "Bard", 8, 0,
			{3, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
			12, 13, 14, 15, 16, 17}, {1, 5}, {}, true));
		list.push_back(Values(2, "Cleric", 8, 0,
			{2, 5, 6, 9, 13, 14}, {4, 5}, {}, true));
		list.push_back(Values(3, "Druid", 8, 0,
			{2, 1, 2, 6, 9, 10, 11, 14, 17}, {3, 4}, {}, true));
		list.push_back(Values(4, "Fighter", 10, 0,
			{2, 0, 1, 3, 5, 6, 7, 11, 17}, {0, 2}, {}, false));
		list.push_back(Values(5, "Monk", 8, 0,
			{2, 0, 3, 5, 14, 16}, {0, 1}, {}, false));
		list.push_back(Values(6, "Paladin", 10, 0,
			{2, 3, 6, 7, 9, 13, 14}, {4, 5}, {}, true));
		list.push_back(Values(7, "Ranger", 10, 0,
			{3, 1, 3, 6, 8, 10, 11, 16, 17}, {0, 1}, {}, true));
		list.push_back(Values(8, "Rogue", 8, 0,
			{4, 0, 3, 4, 6, 7, 8, 11, 12, 13, 15, 16}, {1, 3}, {}, false));
		list.push_back(Values(9, "Sorcerer", 6, 0,
			{2, 2, 4, 6, 7, 13, 14}, {2, 5}, {}, true));
		list.push_back(Values(10, "Warlock", 8, 0,
			{2, 2, 4, 5, 7, 8, 10, 14}, {4, 5}, {}, true));
		list.push_back(Values(11, "Wizard", 6, 0,
			{2, 2, 5, 6, 8, 9, 14}, {3, 4}, {}, true));

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