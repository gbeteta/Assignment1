#include "WackyAxe.h"
#include <time.h>
#include <cmath>


double WackyAxe::hit(double armor)
{
	double damage;
	int rem;
	srand(time(NULL));
	int anumb = rand() % 10 + 1;
	rem = anumb % 2;

	if(rem == 0)
	{
		damage = hitpoints + armor;
	}
	else
	{
		damage = hitpoints - armor;
	}

	return damage;
}