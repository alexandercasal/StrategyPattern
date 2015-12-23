/******************************************************************************
 * AUTHOR:      Alexander Casal
 * FILE:        SmallSword.cpp
 * DESCRIPTION: SmallSword is a small weapon which will always hit the enemy.
 *              The amount of damage is small.
 *****************************************************************************/
#include "smallsword.h"
#include <iostream>

/**
* Constructor
*/
SmallSword::SmallSword()
{
	std::cout << "Small sword equipped\n";
}

/**
* attack
*
* This is where we implement a specific attack strategy for our Weapon.
* In this case, it is a simple notification that the enemy received damage.
*/
void SmallSword::attack()
{
	std::cout << "You swing your sword. The enemy is hurt\n";
}