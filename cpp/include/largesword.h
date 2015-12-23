/******************************************************************************
 * AUTHOR:      Alexander Casal
 * FILE:        largesword.h
 * DESCRIPTION: LargeSword is a large Weapon which can do massive damage to 
 *              the enemy. Due to its size it takes a lot of effort to swing, 
 *			    thus you might miss your target.
 *****************************************************************************/
#include "weapon.h"
#include <stdlib.h>

class LargeSword : public Weapon
{
public:
	LargeSword();

	void attack();
};