/*
Player.hpp is the Player class specification file
*/

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <vector>
#include <iostream>
#include "Item.hpp"
#include "Enemy.hpp"

using std::cout;
using std::endl;
using std::vector;

class Player
{
	int hits;
	int atk;
	void checkSlain();
public:
	Player();
	int attack(Enemy *);
	void defense(int);
	int getHits();
	vector<Item> inventory;
	~Player();
};
#endif
