/* Filename   : BackgroundList.hpp
 * Author     : Brian Eckenrode
 * Date       : Feb 2018
 * Description: Stores all possible Background options
 */

/************************************************************/
//Macro Guard

#ifndef __BKGDLIST_H
#define __BKGDLIST_H

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

class BackgroundList
{

private:

	vector<Values> list;

public:

	BackgroundList()
	{
		// ID, Name, lang choice, feat id, given prof ids, given lang ids, prof choice ids
		list.push_back(Values(0, "Acolyte", 2, 0, {6, 14}, {}, {}, false));
		list.push_back(Values(1, "Anthropologist", 2, 1, {6, 14}, {}, {}, false));
		list.push_back(Values(2, "Archaeologist", 1, 2, {5, 17}, {}, {}, false));
		list.push_back(Values(3, "Charlatan", 0, 3, {4, 15}, {}, {}, false));
		list.push_back(Values(4, "City Watch", 2, 4, {3, 6}, {}, {}, false));
		list.push_back(Values(5, "Clan Crafter", 0, 5, {5, 6}, {9}, {}, false));
		list.push_back(Values(6, "Cloistered Scholar", 2, 6, {5}, {}, {2, 2, 10, 14}, false));
		list.push_back(Values(7, "Courtier", 2, 7, {6, 13}, {}, {}, false));
		list.push_back(Values(8, "Criminal", 0, 8, {4, 16}, {}, {}, false));
		list.push_back(Values(9, "Entertainer", 0, 9, {0, 12}, {}, {}, false));
		list.push_back(Values(10, "Faction Agent", 2, 10, {6}, {}, {1, 1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}, false));
		list.push_back(Values(11, "Far Traveler", 1, 11, {6, 11}, {}, {}, false));
		list.push_back(Values(12, "Folk Hero", 0, 12, {1, 17}, {}, {}, false));
		list.push_back(Values(13, "Gladiator", 0, 9, {0, 12}, {}, {}, false));
		list.push_back(Values(14, "Guild Artisan", 1, 13, {6, 13}, {}, {}, false));
		list.push_back(Values(15, "Guild Merchant", 2, 13, {6, 13}, {}, {}, false));
		list.push_back(Values(16, "Haunted One", 1, 14, {}, {}, {2, 2, 4, 8, 14, 17}, false));
		list.push_back(Values(17, "Hermit", 1, 15, {9, 14}, {}, {}, false));
		list.push_back(Values(18, "Inheritor", 1, 16, {17}, {}, {1, 2, 5, 14}, false));
		list.push_back(Values(19, "Investigator", 2, 4, {6, 8}, {}, {}, false));
		list.push_back(Values(20, "Knight", 1, 17, {5, 13}, {}, {}, false));
		list.push_back(Values(21, "Knight of the Order", 1, 18, {13}, {}, {1, 2, 5, 10, 14}, false));
		list.push_back(Values(22, "Mercenary Veteran", 0, 19, {3, 13}, {}, {}, false));
		list.push_back(Values(23, "Noble", 1, 20, {5, 13}, {}, {}, false));
		list.push_back(Values(24, "Outlander", 1, 21, {3, 17}, {}, {}, false));
		list.push_back(Values(25, "Pirate", 0, 22, {3, 11}, {}, {}, false));
		list.push_back(Values(26, "Sage", 2, 23, {2, 5}, {}, {}, false));
		list.push_back(Values(27, "Sailor", 0, 24, {3, 11}, {}, {}, false));
		list.push_back(Values(28, "Soldier", 0, 25, {3, 7}, {}, {}, false));
		list.push_back(Values(29, "Spy", 0, 8, {4, 16}, {}, {}, false));
		list.push_back(Values(30, "Urban Bounty Hunter", 0, 26, {}, {}, {2, 4, 6, 13, 16}, false));
		list.push_back(Values(31, "Urchin", 0, 27, {15, 16}, {}, {}, false));
		list.push_back(Values(32, "Uthgardt Tribe Member", 1, 28, {3, 17}, {}, {}, false));
		list.push_back(Values(33, "Waterdhavian Noble", 1, 29, {5, 13}, {}, {}, false));

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