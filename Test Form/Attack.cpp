#include "Main.h"
#include <iostream>
extern int fatigue;

int playerAttack()
{
	//default dmg 15-20
	int playerAttack = (fatigue / 10) + 5 + rand() % 5;
	fatigue -= 5;
	return playerAttack;
}

int ratAttack()
{
	//default dmg 3-6
	int	ratAttack = 3 + rand() % 3;
	return ratAttack;
}