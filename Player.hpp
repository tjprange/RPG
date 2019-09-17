/*
Player.hpp is the Player class specification file
*/

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <vector>
#include "item.hpp"
using std::vector;

class Player
{
	int hits;
	int attack;
public:
	Player();
	vector<Item> inventory;
	~Player();
};
#endif
