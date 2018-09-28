#include "Game.h"
#include "Stack.h"
#include "Hero.h"

Stack Game::Battle(Stack & team1, Stack & team2)
{
	Stack winner;
	Hero hero1;
	Hero hero2;
	Hero Dead("dead");
	Hero tmp;
	Hero *ptr;
	Stack temp = Stack();
	bool canFight =true;
	int j;
	int h;
	//this loop allow both teams to fight until all heroes in one of the teams have fallen
	while (canFight)
	{
		//team1's turn
		h = 0;
		//a hero from team1 randomly selects a hero from team2 to fight. it pops the heroes it doesn't want to fight off the stack until it gets its desired hero
		//the heroes it doesn't want to fight are placed in a temporary array
		for (j = 5; j >= hero1.choice(); j--)
		{
			tmp = team2.Top();
			ptr = &tmp;
			temp.Push(ptr);
			team2.Pop();
			h++;
		}
		hero1 = team1.Top();
		hero2 = team2.Top();

		//the two heroes then continuosly fight until at least one have died
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

		//this set of if statements checks who has won the fight and pops them off of the stack accordingly
		if (hero1.isAlive() && (!hero2.isAlive()))
		{
			std::cout << hero2.report() << " " << "has been defeated" << std::endl;
			std::cout << hero1.report() << " " << "wins this round." <<std::endl;
			team2.Pop();
			system("pause");
		}
		else if (((hero2.isAlive())) && (!(hero1.isAlive())))

		{
			std::cout << hero1.report() << " " << "has been defeated" << std::endl;
			std::cout << hero2.report() << " " << "wins this round." << std::endl;
			team1.Pop();
			system("pause");
		}
		else if ((!(hero1.isAlive())) && (!(hero2.isAlive())))
		{
			team1.Pop();
			team2.Pop();
			std::cout << "Both heroes have fallen this round" << std::endl;
			system("pause");
		}

		//the remaining fighters of team2 are then pushed back on to their stack
		for (h; h >= 1; h--)
		{
			tmp = temp.Top();
			ptr = &tmp;
			team2.Push(ptr);
			temp.Pop();
		}

		//team2's turn
		h = 0;
		//a hero from team2 randomly selects a hero from team1 to fight. it pops the heroes it doesn't want to fight off the stack until it gets its desired hero
		//the heroes it doesn't want to fight are placed in a temporary array
		for (j = 5; j != hero2.choice(); j--)
		{
			tmp = team1.Top();
			ptr = &tmp;
			temp.Push(ptr);
			team1.Pop();
			h++;
		}

		hero1 = team2.Top();
		hero2 = team1.Top();

		//the two heroes then continuosly fight until at least one have died

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

		//this set of if statements check who has won the fight and pops them off of the stack accordingly

		if (hero1.isAlive() && (!hero2.isAlive()))
		{
			std::cout << hero2.report() << " " << "has been defeated" << std::endl;
			std::cout << hero1.report() << " " << "wins this round." << std::endl;
			team2.Pop();
			system("pause");
		}
		else if (((hero2.isAlive())) && (!(hero1.isAlive())))

		{
			std::cout << hero1.report() << " " << "has been defeated" << std::endl;
			std::cout << hero1.report() << " " << "wins this round." << std::endl;
			team1.Pop();
			system("pause");
		}
		else if ((!(hero1.isAlive())) && (!(hero2.isAlive())))
		{
			team1.Pop();
			team2.Pop();
			std::cout << "Both heroes have fallen this round" << std::endl;
			system("pause");
		}

		//the remaining fighters of team1 are then pushed back on to their stack
		for (h; h >= 1; h--)
		{
			tmp = temp.Top();
			ptr = &tmp;
			team1.Push(ptr);
			temp.Pop();
		}

		//this checks if either team still has heroes alive if a team doesn't have any heroes alive it makes the opposing team the winner 
		//and sets canFight to false thus breaking the loop
		if (team1.report() == 0)
		{
			canFight = false;
			winner = team2;
		}
		else if (team2.report() == 0)
		{
			canFight = false;
			winner = team1;
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
