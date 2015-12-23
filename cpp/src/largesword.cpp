/******************************************************************************
 * AUTHOR:      Alexander Casal
 * FILE:        largesword.cpp
 * DESCRIPTION: LargeSword is a large Weapon which can do massive damage to
 *              the enemy. Due to its size it takes a lot of effort to swing,
 *			    thus you might miss your target.
 *****************************************************************************/
#include "largesword.h"
#include <stdlib.h>
#include <iostream>

 /**
 * Constructor
 */
LargeSword::LargeSword()
{
	std::cout << "Large sword equipped\n";
}

/**
* attack
*
* This is where we implement a specific attack strategy for our Weapon.
* In this case, there is a random chance the enemy will get hit and
* receive damage.
*/
void LargeSword::attack()
{
	int criticalHit = rand() % 2;

	if (criticalHit)
	{
		std::cout << "You swing your sword. Critical Hit!\n";
	}
	else
	{
		std::cout << "You swing your sword. Too slow, you missed\n";
	}
}