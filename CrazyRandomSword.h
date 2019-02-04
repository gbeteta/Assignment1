#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a crazy sword (hitpoint = number from 7 - 100, ignores random % of 
 * armor points)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword();

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

private:

};

#endif /* Crazy Random Sword */