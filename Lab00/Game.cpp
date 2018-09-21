#include "Game.h"

Hero Game::Battle(Hero & hero1, Hero & hero2)
{
	Hero winner;
	bool canFight = true;
	while (canFight)
	{
		hero1.Fight(hero2);
		std::cout << "Capatain America's health is " << hero1.report() << std::endl;
		system("pause");
		hero2.Fight(hero1);
		std::cout << "Iron Man's health is " << hero2.report() << std::endl;
		system("pause");
		if (hero1.isAlive() == false || hero2.isAlive() == false)
		{
			break;
		}
		else
		{
			continue;
		}
	}
	
	if (hero1.isAlive() && (!hero2.isAlive()))
	{
		std::cout << "Iron Man wins!!\n";
		system("pause");
	}
	else if (((hero2.isAlive())) && (!(hero1.isAlive())))
	{
		std::cout << "Captain America wins!!\n";
		system("pause");
	}
	else if ((!(hero1.isAlive())) && (!(hero2.isAlive())))
	{
		std::cout << "thanos wins\n";
		system("pause");
	}
	return winner;
}
////while (canFight)
//{
//	hero1.Fight(hero2);
//	std::cout << hero1.
//		hero2.Fight(hero1);
//	if (hero1.isAlive == false || hero2.isAlive == false)
//	{
//		break;
//	}
//	else
//	{
//		continue;
//	}
//}
//winner = hero1.isAlive() ? hero1 : hero2;
//return winner;
