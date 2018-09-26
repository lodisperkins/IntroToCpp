#include "Game.h"
#include "Stack.h"
#include "Hero.h"

Stack Game::Battle(Stack & team1, Stack & team2)
{
	Stack winner;
	Hero hero1;
	Hero hero2;
	Hero Dead("dead");
	Stack temp = Stack();
	bool canFight =true;
	int j;
	int h;

	for (int i = 0; i < 6; i++)
	{
		h = 0;

		for (j = 5; j != hero1.choice(); j--)
		{
			//this shit don't work 
			Hero tmp = team2.Top();
			temp.Push(&tmp);
			team2.Pop();
			h++;
		}
		
		hero1 = (Hero&)team1.arr(i);
		hero2 = (Hero&)team2.arr(j);
		while (canFight)
		{
			hero1.Fight(hero2);
			std::cout << hero1 << std::endl;
			system("pause");
			if (hero1.isAlive() == false || hero2.isAlive() == false)
			{
				break;
			}
			hero2.Fight(hero1);
			std::cout << hero2 << std::endl;
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
			hero2 = Dead;
			std::cout << hero2.report() << " " << "has been defeated" << std::endl;
			std::cout << hero1.report() << " " << "wins this round." <<std::endl;
			team2.Pop();
			system("pause");
		}
		else if (((hero2.isAlive())) && (!(hero1.isAlive())))

		{
			hero1 = Dead;
			std::cout << hero1.report() << " " << "has been defeated" << std::endl;
			std::cout << hero1.report() << " " << "wins this round." << std::endl;
			team1.Pop();
			system("pause");
		}
		else if ((!(hero1.isAlive())) && (!(hero2.isAlive())))
		{
			hero1 = Dead;
			hero2 = Dead;
			team1.Pop();
			team2.Pop();
			std::cout << "Both heroes have fallen this round" << std::endl;
			system("pause");
		}
		for (h; h >= 0; h--)
		{
			team2.Push(temp);
			temp++;
		}
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
