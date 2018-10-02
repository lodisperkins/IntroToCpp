#pragma once
class Stack;
class Game
{
private:

	bool mplayerIron=false;
	bool mplayerCap=false;
	bool msim=false;
public:
	Game();
	bool Battle(Stack&team1, Stack&team2);
	void mode(int input);
	
};