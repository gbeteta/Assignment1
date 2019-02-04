#include <string>
#include "Weapon.h"

#ifndef WackyAxe_H
#define WackyAxe_H

/**
 * Defines the behavior of a Magic Hammer (hitpoint = 5, if armor > 20 add to damage dealt ignore 20 % of that armor)
 */
class WackyAxe : public Weapon {
public:

	WackyAxe() : Weapon("Wacky Axe", 10.0) { //Calls Weapon(name, hitpoints) constructor with values Magic Hammer and 5.0
	}

	virtual ~WackyAxe() {};

	virtual double hit(double armor);

};

#endif 