/******************************************************************************
 * AUTHOR:      Alexander Casal
 * FILE:        SmallSword.h
 * DESCRIPTION: SmallSword is a small weapon which will always hit the enemy.
 *              The amount of damage is small.
 *****************************************************************************/
#ifndef _SMALLSWORD_H
#define _SMALLSWORD_H
#include "weapon.h"

class SmallSword : public Weapon
{
public:
	SmallSword();

	void attack();
};

#endif