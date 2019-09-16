/*
This is the definition file for the Enemy class and subclasses thereof 
*/

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <string>

using std::string;

/* Emeny class is the abstract base class for the derived subclasses */
class Enemy
{
protected:
	string name;
	int hits;
	int attack;
public:
	Enemy();
	virtual ~Enemy();
};

/* Skeleton class definition */
class Skeleton :
	public Enemy
{
public:
	Skeleton();
	~Skeleton();
};

/* Zombie class definition */
class Zombie :
	public Enemy
{
public:
	Zombie();
	~Zombie();
};

/* Troll class definition */
class Troll :
	public Enemy
{
public:
	Troll();
	~Troll();
};

/* Ogre class definition */
class Ogre :
	public Enemy
{
public:
	Ogre();
	~Ogre();
};

/* Goblin class definition */
class Goblin :
	public Enemy
{
public:
	Goblin();
	~Goblin();
};

/* Vampire class  definition */
class Vampire :
	public Enemy
{
public:
	Vampire();
	~Vampire();
};

/* Barbarian class definition */
class Barbarian :
	public Enemy
{
public:
	Barbarian();
	~Barbarian();
};

/* Crocodile class definition */
class Crocodile :
	public Enemy
{
	Crocodile();
	~Crocodile();
};

/* Jaguar class definition */
class Jaguar :
	public Enemy
{
public:
	Jaguar();
	~Jaguar();
};

#endif