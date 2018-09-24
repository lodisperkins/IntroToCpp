#include <iostream>
#include <time.h>
#include "Game.h"
#include "Hero.h"
#include "Stack.h"
int main()
{
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
	
	Stack Team1;
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

	Stack Team2;
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

	Game civilWar;
	Hero winner = civilWar.Battle(ironMan, capMerica);
	

}