/******************************************************************************
 * AUTHOR:      Alexander Casal
 * FILE:        main.cpp
 * DESCRIPTION: Driver program to demonstrate a basic use of the 
 *              Strategy Design Pattern.
 *****************************************************************************/
#include "game.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main(int argc, char **argv) 
{
	// Seed random number generation
	srand(time(NULL));

	// Create instance of game and play
	Game game;
	game.play();

	return 0;
}