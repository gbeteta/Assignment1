/* 
 * File:   SimpleHammer.cpp
 * Author: Gianmarco Beteta <gb15d@my.fsu.edu>
 *
 * 
 */
#include <time.h>
#include <cmath>
#include "CrazyRandomSword.h"


CrazyRandomSword::CrazyRandomSword() : Weapon("Crazy Random Sword", 0.0)
{
	srand(time(NULL));
	this->hitPonts = (double)(rand % 93 + 7);
}

double CrazyRandomSword::hit(double armor)
{
	double damage;
	srand(time(NULL));

	int offset = floor( (armor * 0.33) - 2);
	armor -= (double)(rand() % offset + 2);
	damage = hitPoints - (armor);

	return damage;

}