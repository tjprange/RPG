#include "Enemy.hpp"


/* Constructor for the Enemy class */
Enemy::Enemy()
{
}

/* This attack function use the attackDamage function to generate a damage value which is saved 
into the attack variable. A statement is printed and the damage value is returned. */
int Enemy::attack()
{
	int attack = attackDamage(this->atk);
	cout << "The " << this->name << " attacks you for " << attack << " damage!" << endl;
	return attack;
}

/* This function will return the hits of the Enemy object */
int Enemy::getHits()
{
	return this->hits;
}

/* This function will return the name of the Enemy object */
string Enemy::getName()
{
	return this->name;
}


/* Destructor for the Enemy class*/
Enemy::~Enemy()
{
}

/* This function will take the atk value of an enemy object as a parameter. This value will be used as the min value and atk * 2 as the max value. 
A random number between these two values is generated and returned by the function. */
int Enemy::attackDamage(int atk)
{
	return (rand() % (atk * 2 - atk + 1)) + atk;
}

/* This function takes the player's damage value as a parameter. The damage generated is subtracted from the enemy object's hits. */
void Enemy::defense(int damage)
{
	this->hits = this->hits - damage;
	checkSlain();
}

void Enemy::checkSlain()
{
	if (this->hits <= 0) {
		cout << "\nThe " << this->getName() << " has been slain!" << endl;
	}	
}

/* Constructor for the Skeleton class */
Skeleton::Skeleton()
{
	this->name = "Skeleton";
	this->hits = 4;
	this->atk = 1;
}

/* Destructor for the Skeleton class*/
Skeleton::~Skeleton()
{

}

/* Constructor for the Zombie class */
Zombie::Zombie()
{
	this->name = "Zombie";
	this->hits = 5;
	this->atk = 1;
	//bite
}

/* Destructor for the Zombie class*/
Zombie::~Zombie()
{

}

/* Constructor for the Troll class */
Troll::Troll()
{
	this->name = "Troll";
	this->hits = 10;
	this->atk = 3;
	//big smash
}

/* Destructor for the Troll class*/
Troll::~Troll()
{

}

/* Constructor for the Ogre class */
Ogre::Ogre()
{
	this->name = "Ogre";
	this->hits = 12;
	this->atk = 5;
	//big smash
}

/* Destructor for the Ogre class*/
Ogre::~Ogre()
{

}

/* Constructor for the Goblin class */
Goblin::Goblin()
{
	this->name = "Goblin";
	this->hits = 4;
	this->atk = 1;
	//spit venom
}


/* Destructor for the Goblin class*/
Goblin::~Goblin()
{

}

/* Constructor for the Vampire class */
Vampire::Vampire()
{
	this->name = "Vampire";
	this->hits = 5;
	this->atk = 1;
	//charm
}

/* Destructor for the Vampire class*/
Vampire::~Vampire()
{

}

/* Constructor for the Barbarian class */
Barbarian::Barbarian()
{
	this->name = "Barbarian";
	this->hits = 8;
	this->atk = 2;
}

/* Destructor for the Barbarian class*/
Barbarian::~Barbarian()
{

}

/* Constructor for the Crocodile class */
Crocodile::Crocodile()
{
	this->name = "Crocodile";
	this->hits = 8;
	this->atk = 2;
	//bite
}

/* Destructor for the Crocodile class*/
Crocodile::~Crocodile()
{

}

/* Constructor for the Jaguar class */
Jaguar::Jaguar()
{
	this->name = "Jaguar";
	this->hits = 6;
	this->atk = 2;
	//bite
}

/* Destructor for the Jaguar class */
Jaguar::~Jaguar()
{
}

/* Constructor for the Jaguar class */
Basilisk::Basilisk()
{
	this->name = "Basilisk";
	this->hits = 6;
	this->atk = 2;
	//spit venom
}

/* Destructor for the Basilisk class */
Basilisk::~Basilisk()
{

}