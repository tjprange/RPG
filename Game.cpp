/*
This is the function implementation for the Game class.
*/

#include "Game.hpp"

/* The Game constructor will dynamically allocate each location and links them together. */
Game::Game()
{
	// Seed for random functions
	unsigned seed;
	seed = time(0);
	srand(seed);

	// dynamically allocate Location objects
	hillsborad = new Hillsborad;
	ashenvale = new Ashenvale;
	desolace = new Desolace;
	stonetalon = new Stonetalon;
	barrens = new Barrens;
	swamp = new Swamp;
	plaguelands = new Plaguelands;
	stranglethorn = new Stranglethorn;
	wetlands = new Wetlands;

	// link adjacent locations to Hillsborad
	hillsborad->setNorth(plaguelands);
	hillsborad->setEast(ashenvale);
	hillsborad->setSouth(stonetalon);
	hillsborad->setWest(desolace);

	// link adjacent locations to Ashenvale
	ashenvale->setNorth(stranglethorn);
	ashenvale->setEast(desolace);
	ashenvale->setSouth(barrens);
	ashenvale->setWest(hillsborad);

	// link adjacent locations to Desolace
	desolace->setNorth(wetlands);
	desolace->setEast(hillsborad);
	desolace->setSouth(swamp);
	desolace->setWest(ashenvale);

	// link adjacent locations to Stonetalon
	stonetalon->setNorth(hillsborad);
	stonetalon->setEast(barrens);
	stonetalon->setSouth(plaguelands);
	stonetalon->setWest(swamp);

	// link adjacent locations to Barrens
	barrens->setNorth(ashenvale);
	barrens->setEast(swamp);
	barrens->setSouth(stranglethorn);
	barrens->setWest(stonetalon);

	// link adjacent locations to Swamp of Sorrows
	swamp->setNorth(desolace);
	swamp->setEast(stonetalon);
	swamp->setSouth(wetlands);
	swamp->setWest(barrens);

	// link adjacent locations to Plaguelands
	plaguelands->setNorth(stonetalon);
	plaguelands->setEast(stranglethorn);
	plaguelands->setSouth(hillsborad);
	plaguelands->setWest(wetlands);

	// link adjacent locations to Stranglethorn
	stranglethorn->setNorth(barrens);
	stranglethorn->setEast(wetlands);
	stranglethorn->setSouth(ashenvale);
	stranglethorn->setWest(plaguelands);

	// link adjacent locations to Wetlands
	wetlands->setNorth(swamp);
	wetlands->setEast(plaguelands);
	wetlands->setSouth(desolace);
	wetlands->setWest(stranglethorn);

	// Current location is Stranglethorn
	current = stranglethorn;

	// Create player object
	player = new Player();

	// set enemy to NULL
	enemy = NULL;

	// call to game loop function
	gameOperations();
}

/* This is the game loop that will control the operations of the game */
void Game::gameOperations()
{
	displayLocation();
	playerOptions();

	//enemy = generateEnemy(); // generates new enemy
	//duel(player, enemy); // fight
	

	// return allocated memory to the heap and set enemy pointer back to NULL
	delete enemy;
	enemy = NULL;
}

/* This function will display the player's options and proceed to the appropriate function as decided. */
void Game::playerOptions()
{
	cout << "\nMake a decision:\n" << endl;
	cout << "1 - Investigate the area." << endl;
	cout << "2 - Move to a different location." << endl;
	cout << "3 - Use an item from your inventory." << endl;

	userChoice = validation(3);
	switch (userChoice)
	{
	case 1: investigate();
		break;
	case 2: moveChoice();
		break;
	case 3: // use item from inventory
		break;
	}
}

/* This function will randomly generate an enemy to duel, find an item for use or nothing happens */
void Game::investigate()
{
	int randomNum = rand() % 3 + 1;

	switch (randomNum)
	{
	case 1: generateEnemy(); // case 1 will generate an enempy and then use player and enemy pointers in duel() function call
		duel(player, enemy);
		break;
	case 2: cout << "Print stub for obtain an item" << endl; // case 2 player finds an item and adds it to inventory
		break;
	case 3: cout << "nothing happens" << endl;
		break;
	}
}

/* This function will print a menu of options for the user to move. The input selection is validated and if valid will call the appropriate function
to move to the current location pointer.*/
void Game::moveChoice()
{
	cout << "\nEnter a choice to move: " << endl;
	cout << "1 - North" << endl;
	cout << "2 - East" << endl;
	cout << "3 - South" << endl;
	cout << "4 - West" << endl;

	userChoice = validation(4);

	switch (userChoice)
	{
	case 1: moveNorth();
		break;
	case 2: moveEast();
		break;
	case 3: moveSouth();
		break;
	case 4: moveWest();
		break;
	}
}

/* This function will generate and return an enemy object. There are currently 10 types of enemies available. The function will generate a random number
1-10 and that value will dictate which type of enemy is dynamically allocated. */
Enemy* Game::generateEnemy()
{
	// generate random number 1-10
	int choice = rand() % 10 + 1;

	switch (choice)
	{
	case 1: enemy = new Skeleton;
		break;
	case 2: enemy = new Zombie;
		break;
	case 3: enemy = new Troll;
		break;
	case 4: enemy = new Ogre;
		break;
	case 5: enemy = new Goblin;
		break;
	case 6: enemy = new Vampire;
		break;
	case 7: enemy = new Barbarian;
		break;
	case 8: enemy = new Crocodile;
		break;
	case 9: enemy = new Jaguar;
		break;
	case 10: enemy = new Basilisk;
		break;
	}
	cout << "You encounter an " << enemy->getName() << "!" << endl;

	return enemy;
}

/* This function takes a Player pointer and an Enemy pointer as parameters. Each object will take turns attacking and defending until their hits > 0 */
void Game::duel(Player *player, Enemy *enemy)
{
	int round = 1;
	// The loop will iterate for as long as the player and the enemy's health > 0
	while (player->getHits() > 0 && enemy->getHits() > 0)
	{

		cout << "Round " << round << endl;
		cout << "The " << enemy->getName() << " has " << enemy->getHits() << " hits remaining. " << endl;
		enemy->defense(player->attack(enemy)); // The enemy will defend the attack value generated by the player.
		if (enemy->getHits() <= 0)
		{
			continue;
		}
		cout << "You have " << player->getHits() << " hits remaining. " << endl;
		player->defense(enemy->attack()); // The player will defend the attack value generated by the enemy.
		cout << endl;
		round++;
	}
}

/* This function will return the name of the current location */
void Game::displayLocation()
{
	cout << "You have entered " << current->getName() << "\n" << current->getDescription() << endl;
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
	delete player;
	delete enemy;
}
