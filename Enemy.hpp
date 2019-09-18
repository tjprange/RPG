/*
Enemy.hpp is the Enemy class specification file and subclasses thereof. Enemy is a abstract base class. 
*/

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::string;

/* Ememy class is the abstract base class for the derived subclasses */
class Enemy
{
protected:
	string name;
	int hits;
	int atk;
	int attackDamage(int);
	void checkSlain();
public:
	Enemy();
	virtual int attack();
	virtual void defense(int);
	int getHits();
	string getName();
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
public:
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

/* Basilisk class definition */
class Basilisk :
	public Enemy
{
public:
	Basilisk();
	~Basilisk();
};

#endif