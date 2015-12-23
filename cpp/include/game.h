/******************************************************************************
 * AUTHOR:      Alexander Casal
 * FILE:        game.h
 * DESCRIPTION: Demonstrate the use of the Strategy Design Pattern through 
 *              a very simple game which allows the user to select different 
 *				weapons. Each weapon has a different characteristic, changing 
 *				the way the player attacks.
 *****************************************************************************/
#ifndef _GAME_H
#define _GAME_H
#include "player.h"

class Game
{
public:
	Game();

	void play();
	void showOptions();
	int getOption();

private:
	bool playing;
	Player player;
};

#endif