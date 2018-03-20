/* Filename   : Dungeons.cpp
 * Author     : Brian Eckenrode
 * Date       : Feb 2018
 * Description: Just a driver for all the other classes right now
 */

/************************************************************/
//System includes

#include <cstdlib>
#include <iostream>

/************************************************************/
//Local includes

#include "../include/Sheet.hpp"

/************************************************************/
//Using declarations

using std::cout;
using std::endl;

/************************************************************/
// Function Prototypes

void
printIntro();

/************************************************************/

int
main()
{
	printIntro();

	Sheet doint;
	doint.printSheet();
}

void
printIntro()
{
	cout << endl << "Dungeons and Dragons";
	cout << endl << "5e Character Creator" << endl;
	cout << endl << "v0.3" << endl;
}