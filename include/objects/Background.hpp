/* Filename   : Backgrounds.hpp
 * Author     : Brian Eckenrode
 * Date       : Feb 2018
 * Description: Background object, handles background data
 */

/************************************************************/
//Macro Guard

#ifndef __BKGD_H
#define __BKGD_H

/************************************************************/
//System includes

#include <vector>
#include <cstdlib>
#include <iostream>
#include <string>

/************************************************************/
//Local includes

#include "../containers/BackgroundList.hpp"
#include "../util/Util.hpp"

/************************************************************/
//Using Declarations

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Background
{

private:

	int bID;
	string bName;
	int bLangs;
	int bFeat;
	vector<int> bProfs;

	void
	init()
	{
		BackgroundList list;
		int choice;
		int bound = list.size();

		cout << endl;

		
		for(int i = 0; i != bound; ++i)
		{
			printf("(%2d) : %s\n", (i + 1), list.select(i).getName().c_str());
		}

		choice = input("Choose a background.", bound);

		--choice;
		this->bID = list.select(choice).getID();
		this->bName = list.select(choice).getName();
		this->bLangs = list.select(choice).getAtt(1);
		this->bFeat = list.select(choice).getAtt(2);
		this->bProfs = concat(list.select(choice).getList(1), chooseProfs("Background", list.select(choice).getList(3)));

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

	Background(int idIn, string nameIn, int langsIn,
		int featIn, vector<int> profsIn)
	: bID(idIn), bName(nameIn), bLangs(langsIn), bFeat(featIn), bProfs(profsIn)
	{
	}

	Background()
	{
		init();
	}

	int
	getID()
	{
		return bID;
	}

	string
	getName()
	{
		return bName;
	}

	int
	getLangs()
	{
		return bLangs;
	}

	int
	getFeat()
	{
		return bFeat;
	}

	vector<int>
	getProfs()
	{
		return bProfs;
	}
};

#endif