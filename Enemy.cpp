#include "Enemy.hpp"


/* Constructor for the Enemy class */
Enemy::Enemy()
{
}

/* Destructor for the Enemy class*/
Enemy::~Enemy()
{
}

/* Constructor for the Skeleton class */
Skeleton::Skeleton()
{
	this->hits = 4;
	this->attack = 1;
}

/* Destructor for the Skeleton class*/
Skeleton::~Skeleton()
{

}

/* Constructor for the Zombie class */
Zombie::Zombie()
{
	this->hits = 5;
	this->attack = 1;
	//bite
}

/* Destructor for the Zombie class*/
Zombie::~Zombie()
{

}

/* Constructor for the Troll class */
Troll::Troll()
{
	this->hits = 10;
	this->attack = 3;
	//big smash
}

/* Destructor for the Troll class*/
Troll::~Troll()
{

}

/* Constructor for the Ogre class */
Ogre::Ogre()
{
	this->hits = 12;
	this->attack = 5;
	//big smash
}

/* Destructor for the Ogre class*/
Ogre::~Ogre()
{

}

/* Constructor for the Goblin class */
Goblin::Goblin()
{
	this->hits = 4;
	this->attack = 1;
	//spit venom
}

/* Destructor for the Goblin class*/
Goblin::~Goblin()
{

}

/* Constructor for the Vampire class */
Vampire::Vampire()
{
	this->hits = 5;
	this->attack = 1;
	//charm
}

/* Destructor for the Vampire class*/
Vampire::~Vampire()
{

}

/* Constructor for the Barbarian class */
Barbarian::Barbarian()
{
	this->hits = 8;
	this->attack = 2;
}

/* Destructor for the Barbarian class*/
Barbarian::~Barbarian()
{

}

/* Constructor for the Crocodile class */
Crocodile::Crocodile()
{
	this->hits = 8;
	this->attack = 2;
	//bite
}

/* Destructor for the Crocodile class*/
Crocodile::~Crocodile()
{

}

/* Constructor for the Jaguar class */
Jaguar::Jaguar()
{
	this->hits = 6;
	this->attack = 2;
	//bite
}

/* Destructor for the Jaguar class */
Jaguar::~Jaguar()
{
}

/* Constructor for the Jaguar class */
Basilisk::Basilisk()
{
	this->hits = 6;
	this->attack = 2;
	//spit venom
}

/* Destructor for the Basilisk class */
Basilisk::~Basilisk()
{

}