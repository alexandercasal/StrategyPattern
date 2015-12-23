/******************************************************************************
 * AUTHOR:      Alexander Casal
 * FILE:        Weapon.h
 * DESCRIPTION: Weapon interface providing the attack method.
 *              This is the starting point of our strategy.
 *****************************************************************************/
#ifndef _WEAPON_H
#define _WEAPON_H

class Weapon
{
public:
	virtual void attack() = 0;
	virtual ~Weapon() {}
};

#endif