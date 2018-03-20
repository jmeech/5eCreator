/* Filename   : Info.hpp
 * Author     : Brian Eckenrode
 * Date       : Feb 2018
 * Description: Handles all character background/flavor info
 */

/************************************************************/
//Macro Guard

#ifndef __INFO_H
#define __INFO_H

/************************************************************/
//System includes

#include <cstdlib>
#include <iostream>
#include <string>

/************************************************************/
//Local includes

#include "../util/Util.hpp"

/************************************************************/
//Using Declarations

using std::cin;
using std::cout;
using std::string;
using std::stoi;

class Info{

private:

	string cName;
	string pName;
	int cLevel;
	string cAlign;

	string
	setAlign()
	{
		cout << endl << "(1) Lawful Good     (2) Neutral Good    (3) Chaotic Good" << endl;
		cout << "(4) Lawful Neutral  (5) True Neutral    (6) Chaotic Neutral" << endl;
		cout << "(7) Lawful Evil     (8) Neutral Evil    (9) Chaotic Evil" << endl;

		int choice = input("Choose your alignment", 9);

		switch (choice)
		{
			case 1 : return "Lawful Good";
			case 2 : return "Neutral Good";
			case 3 : return "Chaotic Good";
			case 4 : return "Lawful Neutral";
			case 5 : return "True Neutral";
			case 6 : return "Chaotic Neutral";
			case 7 : return "Lawful Evil";
			case 8 : return "Neutral Evil";
			default : return "Chaotic Evil";
		}
	}

public:

	Info()
	{
		cName = input("Enter your character's name:");
		pName = input("Enter your actual name:");
		cLevel = input("Enter your level:", 20);
		cAlign = setAlign();
	}

	string
	getName()
	{
		return cName;
	}

	string
	getPlayer()
	{
		return pName;
	}

	int
	getLevel()
	{
		return cLevel;
	}

	string
	getAlign()
	{
		return cAlign;
	}

	int
	getProfBonus()
	{
		return ((cLevel + 7) / 4);
	}
};

#endif