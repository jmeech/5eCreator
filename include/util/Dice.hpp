/* Filename   : Dice.hpp
 * Author     : Brian Eckenrode
 * Date       : Nov 2017
 * Description: Provides random polyhedral die rolls
 */

/************************************************************/
// Macro guard

#ifndef __DICE_H
#define __DICE_H

/************************************************************/
//System includes

#include <cstdlib>
#include <ctime>

/************************************************************/

class Dice
{
public:
	Dice()
	{
		srand(time(NULL));
	}

	int
	d100()
	{
		return (rand() % 100) + 1;
	}

	int
	d20()
	{
		return (rand() % 20) + 1;
	}

	int
	d20(int n)
	{
		int sum = 0;
		while(n != 0)
		{
			sum += d20();
			--n;
		}
		return sum;
	}

	int
	d12()
	{
		return (rand() % 12) + 1;
	}

	int
	d12(int n)
	{
		int sum = 0;
		while(n != 0)
		{
			sum += d12();
			--n;
		}
		return sum;
	}

	int
	d10()
	{
		return (rand() % 10) + 1;
	}

	int
	d10(int n)
	{
		int sum = 0;
		while(n != 0)
		{
			sum += d10();
			--n;
		}
		return sum;
	}

	int
	d8()
	{
		return (rand() % 8) + 1;
	}

	int
	d8(int n)
	{
		int sum = 0;
		while(n != 0)
		{
			sum += d8();
			--n;
		}
		return sum;
	}
	
	int
	d6()
	{
		return (rand() % 6) + 1;
	}

	int
	d6(int n)
	{
		int sum = 0;
		while(n != 0)
		{
			sum += d6();
			--n;
		}
		return sum;
	}

	int
	d4()
	{
		return (rand() % 4) + 1;
	}

	int
	d4(int n)
	{
		int sum = 0;
		while(n != 0)
		{
			sum += d4();
			--n;
		}
		return sum;
	}

	int
	dX(int x)
	{
		return (rand() % x) + 1;
	}

	int
	dX(int n, int x)
	{
		int sum = 0;
		while(n != 0)
		{
			sum += ((rand() % x) + 1);
			--n;
		}
		return sum;
	}

	int
	getStat()
	{
		return(d6(4) - d6());
	}
};

/************************************************************/

#endif

/************************************************************/
/************************************************************/