#include <iostream>
#include <time.h>
#include "Game.h"
#include "Hero.h"
#include "Stack.h"
int main()
{
	//defense equation needs to be fixeed
	//unknwon error occurs during second fight
	//top function needs to be checked
	//player input wanted but not needed
	//screen is cluttered
	
	srand(time(NULL));

	//team 1
	Hero ironMan( "Ironman");
	Hero warMachine("War Machine");
	Hero blackWidow("Black Widow");
	Hero blackPanther("Black Panther");
	Hero vision("Vision");
	Hero spiderMan("Spider Man");
	//team 2
	Hero capMerica("Captain America");
	Hero hawkeye("Hawk Eye");
	Hero falcon("Falcon");
	Hero bucky("Bucky");
	Hero scarletWitch("Scarlet Witch");
	Hero antMan("Ant-Man");;

	Hero *ptr;
	
	Stack Team1("Team Iron Man");
	ptr = &ironMan;
	Team1.Push(ptr);
	ptr = &warMachine;
	Team1.Push(ptr);
	ptr = &blackWidow;
	Team1.Push(ptr);
	ptr = &blackPanther;
	Team1.Push(ptr);
	ptr = &vision;
	Team1.Push(ptr);
	ptr = &spiderMan;
	Team1.Push(ptr);

	Stack Team2("Team Captain America");
	ptr = &capMerica;
	Team2.Push(ptr);
	ptr = &hawkeye;
	Team2.Push(ptr);
	ptr = &falcon;
	Team2.Push(ptr);
	ptr = &bucky;
	Team2.Push(ptr);
	ptr = &scarletWitch;
	Team2.Push(ptr);
	ptr = &antMan;
	Team2.Push(ptr);
	/*Team2.Push(ptr);*/

	Game civilWar;

	bool endGame = true;

	while (endGame)
	{
		endGame = civilWar.Battle(Team1, Team2);
	}
	
	system("pause");
}