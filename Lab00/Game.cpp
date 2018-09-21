#include "Game.h"

Hero Game::Battle(Hero & hero1, Hero & hero2)
{	
	//we fight hero1 against hero 2	
	hero1.Fight(hero2);
	hero2.Fight(hero1);
	//we then fight hero2 against hero1 but ONLY if they are both alive
}
