/*
This is the class definition file for Game. This class will control the flow of the game.
*/



#ifndef GAME_HPP
#define GAME_HPP
#include <iostream>
#include "Location.hpp"
#include "Player.hpp"
#include "Enemy.hpp"

using std::cout;
using std::endl;

class Game
{
private:
	Location *hillsborad;
	Location *ashenvale;
	Location *desolace;
	Location *stonetalon;
	Location *barrens;
	Location *swamp;
	Location *plaguelands;
	Location *stranglethorn;
	Location *wetlands;
	Location *current;
	Enemy *enemy;
	Player *player;
	void gameOperations();
	void moveNorth();
	void moveEast();
	void moveSouth();
	void moveWest();
	void displayLocation();
	void duel(Player *, Enemy *);
	Enemy * generateEnemy();
public:
	Game();
	~Game();
};

#endif
