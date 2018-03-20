/* Filename   : Features.hpp
 * Author     : Brian Eckenrode
 * Date       : Mar 2018
 * Description: Features object, handles feature data
 */

/************************************************************/
//Macro Guard

#ifndef __FEAT_H
#define __FEAT_H

/************************************************************/
//System includes

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

/************************************************************/
//Local includes

#include "../containers/BackgroundList.hpp"
#include "../util/Util.hpp"

/************************************************************/
//Using Declarations

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;

class Feature
{

private:

	int fID;
	string fName;
	ifstream fFile;

public:

	Feature(int i)
	{
		fID = list.select(i).getID();

	}
}


#endif