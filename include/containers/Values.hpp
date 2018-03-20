/* Filename   : Values.hpp
 * Author     : Brian Eckenrode
 * Date       : Feb 2018
 * Description: Stores all possible Values options
 */

/************************************************************/
//Macro Guard

#ifndef __VALUES_H
#define __VALUES_H

/************************************************************/
//System includes

#include <vector>
#include <cstdlib>
#include <iostream>
#include <string>

/************************************************************/
//Local includes

/************************************************************/
//Using Declarations

using std::vector;
using std::string;

class Values
{

private:

	int id;
	string name;
	int attA;
	int attB;
	vector<int> listA;
	vector<int> listB;
	vector<int> listC;
	bool boolA;

public:

	Values(int a, string b, int c, int d, vector<int> e, vector<int> f, vector<int> g, bool h)
	: id(a), name(b), attA(c), attB(d), listA(e), listB(f), listC(g), boolA(h)
	{
	}

	int
	getID()
	{
		return id;
	}

	string
	getName()
	{
		return name;
	}

	int
	getAtt(int i)
	{
		switch (i)
		{
			case 1 : return attA;
			default : return attB;
		}
	}

	vector<int>
	getList(int i)
	{
		switch (i)
		{
			case 1 : return listA;
			case 2 : return listB;
			default : return listC;
		}

	}

	bool
	getBool()
	{
		return boolA;
	}


};

#endif