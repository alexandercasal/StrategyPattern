/******************************************************************************
* AUTHOR:      Alexander Casal
* FILE:        player.cpp
* DESCRIPTION: In this case, Player is the Client. This is where we need the
*              ability to select different strategies at runtime. The Player
*              equips a weapon. This weapon can be exchanged for another at
*              any time. When a weapon is equipped, the player can attack
*              enemies with it.
*****************************************************************************/
#include "player.h"
#include <iostream>

 /**
 * Constructor
 *
 * At first, Player starts without any weapon equipped.
 */
Player::Player()
{
	weapon = nullptr;
}

/**
* changeWeapon
*
* Provide the ability to change strategies (Weapon) at runtime.
*/
void Player::changeWeapon(std::unique_ptr<Weapon> weapon)
{
	this->weapon = std::move(weapon);
}

/**
* attack
*
* Allow the Player to attack using the assigned strategy (Weapon).
*/
void Player::attack()
{
	if (weapon != nullptr)
	{
		weapon->attack();
	}
	else
	{
		std::cout << "You don't have a weapon equipped!\n";
	}
}