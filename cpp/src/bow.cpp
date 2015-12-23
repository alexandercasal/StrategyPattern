/******************************************************************************
* AUTHOR:      Alexander Casal
* FILE:        bow.cpp
* DESCRIPTION: Bow is a silent weapon which allows the player to fire an
*              arrow. Sometimes the player will light the arrow on fire.
*****************************************************************************/
#include "bow.h"
#include <stdlib.h>
#include <iostream>

/**
* Constructor
*/
Bow::Bow()
{
	std::cout << "Bow equipped\n";
}

/**
* attack
*
* This is where we implement a specific attack strategy for our Weapon.
* In this case, there is a random chance the player will light his arrow
* on fire and burn the field.
*/
void Bow::attack()
{
	int flamingArrow = rand() % 2;

	if (flamingArrow)
	{
		std::cout << "The arrow caught on fire. It lands on the grass and 4 enemies"
			      << " have been badly burned\n";
	}
	else
	{
		std::cout << "An arrow flies through the air and silently takes out"
			      << " the enemy\n";
	}
}
