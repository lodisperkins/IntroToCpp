#include "Game.h"

Hero Game::Battle(Hero & hero, Hero & hero2)
{
	hero.Fight(hero2);
	hero2.Fight(hero);
	if (hero.isAlive == true)
	{
		return hero;
	}
	else if (hero2.isAlive == true)
	{
		return hero2;
	}
}
