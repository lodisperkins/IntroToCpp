#include <iostream>
#include <time.h>
#include "Game.h"
#include "Hero.h"
#include "Stack.h"
int main()
{
	srand(time(NULL));


	Hero ironMan( "Ironman");
	Hero capMerica("Captain America");
	Hero *ptr;

	Stack Team1;
	ptr = &ironMan;
	Team1.Push(ptr);

	Stack Team2;
	ptr = &capMerica;
	Team2.Push(ptr);

	Game civilWar;
	Hero winner = civilWar.Battle(ironMan, capMerica);
	

}