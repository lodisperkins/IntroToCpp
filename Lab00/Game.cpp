#include "Game.h"

Hero Game::Battle(Hero & hero, Hero & hero2)
{
	bool life = hero.isAlive();
	bool life2 = hero2.isAlive();
	while (life == true || life2 == true)
	{
		bool life = hero.isAlive();
		
		if(life == false)
		{
			break;
		}
		else 
		{
			hero.Fight(hero2);
		}
		bool life2 = hero2.isAlive();
		if (life2 == false)
		{
			break;
		}
		else
		{
			hero2.Fight(hero);
		}
	}
	
	if (life == true)
	{
		std::cout << "Iron Man wins!!\n";
		return hero;
	}
	else if (life2== true)
	{
		std::cout << "Captain America wins!!\n";
		return hero2;
	}
}
