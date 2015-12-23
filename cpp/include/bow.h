/******************************************************************************
 * AUTHOR:      Alexander Casal
 * FILE:        bow.h
 * DESCRIPTION: Bow is a silent weapon which allows the player to fire an 
 *              arrow. Sometimes the player will light the arrow on fire.
 *****************************************************************************/
#ifndef _BOW_H
#define _BOW_H
#include "weapon.h"

class Bow : public Weapon
{
public:
	Bow();

	void attack();
};
#endif