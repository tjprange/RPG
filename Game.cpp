/*
This is the function implementation for the Game class.
*/

#include "Game.hpp"


/* The Game constructor will dynamically allocates each location which and links them together. */
Game::Game()
{
	hillsborad = new Hillsborad;
	ashenvale = new Ashenvale;
	desolace = new Desolace;
	stonetalon = new Stonetalon;
	barrens = new Barrens;
	swamp = new Swamp;
	plaguelands = new Plaguelands;
	stranglethorn = new Stranglethorn;
	wetlands = new Wetlands;

	//link adjacent locations to Hillsborad
	hillsborad->setNorth(plaguelands);
	hillsborad->setEast(ashenvale);
	hillsborad->setSouth(stonetalon);
	hillsborad->setWest(desolace);

	//link adjacent locations to Ashenvale
	ashenvale->setNorth(stranglethorn);
	ashenvale->setEast(desolace);
	ashenvale->setSouth(barrens);
	ashenvale->setWest(hillsborad);

	//link adjacent locations to Desolace
	desolace->setNorth(wetlands);
	desolace->setEast(hillsborad);
	desolace->setSouth(swamp);
	desolace->setWest(ashenvale);

	//link adjacent locations to Stonetalon
	stonetalon->setNorth(hillsborad);
	stonetalon->setEast(barrens);
	stonetalon->setSouth(plaguelands);
	stonetalon->setWest(swamp);

	//link adjacent locations to Barrens
	barrens->setNorth(ashenvale);
	barrens->setEast(swamp);
	barrens->setSouth(stranglethorn);
	barrens->setWest(stonetalon);

	//link adjacent locations to Swamp of Sorrows
	swamp->setNorth(desolace);
	swamp->setEast(stonetalon);
	swamp->setSouth(wetlands);
	swamp->setWest(barrens);

	//link adjacent locations to Plaguelands
	plaguelands->setNorth(stonetalon);
	plaguelands->setEast(stranglethorn);
	plaguelands->setSouth(hillsborad);
	plaguelands->setWest(wetlands);

	//link adjacent locations to Stranglethorn
	stranglethorn->setNorth(barrens);
	stranglethorn->setEast(wetlands);
	stranglethorn->setSouth(ashenvale);
	stranglethorn->setWest(plaguelands);

	//link adjacent locations to Wetlands
	wetlands->setNorth(swamp);
	wetlands->setEast(plaguelands);
	wetlands->setSouth(desolace);
	wetlands->setWest(stranglethorn);

	//Current location is Stranglethorn
	current = stranglethorn;

	gameOperations();
}

/* This is the game loop that will control the operations of the game */
void Game::gameOperations()
{
	
}

/* This function will return the name of the current location */
void Game::displayLocation()
{
	cout << current->getName();
}

/* Shifts the current location to the it's north pointer */
void Game::moveNorth()
{
	current = current->getNorth();
}

/* Shifts the current location to the it's east pointer */
void Game::moveEast()
{
	current = current->getEast();
}

/* Shifts the current location to the it's south pointer */
void Game::moveSouth()
{
	current = current->getSouth();
}

/* Shifts the current location to the it's west pointer */
void Game::moveWest()
{
	current = current->getWest();
}

/* The game destructor will free any allocated memory. */
Game::~Game()
{
	delete hillsborad;
	delete ashenvale;
	delete desolace;
	delete stonetalon;
	delete barrens;
	delete swamp;
	delete plaguelands;
	delete stranglethorn;
	delete wetlands;
}
