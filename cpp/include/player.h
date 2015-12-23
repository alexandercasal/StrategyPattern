/******************************************************************************
 * AUTHOR:      Alexander Casal
 * FILE:        player.h
 * DESCRIPTION: In this case, Player is the Client. This is where we need the 
 *              ability to select different strategies at runtime. The Player 
 *              equips a weapon. This weapon can be exchanged for another at 
 *              any time. When a weapon is equipped, the player can attack 
 *              enemies with it.
 *****************************************************************************/
#ifndef _PLAYER_H
#define _PLAYER_H
#include "weapon.h"
#include <memory>

class Player
{
public:
	Player();

	void changeWeapon(std::unique_ptr<Weapon> weapon);
	void attack();
private:
	std::unique_ptr<Weapon> weapon;
};

#endif