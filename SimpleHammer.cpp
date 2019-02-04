/* 
 * File:   SimpleHammer.cpp
 * Author: Gianmarco Beteta <gb15d@my.fsu.edu>
 *
 * 
 */
#include "SimpleHammer.h"


double SimpleHammer::hit(double armor) 
{
	double damage;
	if(armor<30)
	{
		damage = hitPoints;
	}
	else
	{
		damage = hitPoints - (armor);
	}

	return damage;
}