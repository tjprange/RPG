/*
This is the class specification file for the Location class and subclasses thereof. The subclass names were inspired by classic "World of Warcraft" zones.
*/

#ifndef LOCATION_HPP
#define LOCATION_HPP
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Location
{
protected:
	string name;
	Location *north = NULL;
	Location *east = NULL;
	Location *south = NULL;
	Location *west = NULL;

public:
	Location();
	void setNorth(Location *);
	void setEast(Location *);
	void setSouth(Location *);
	void setWest(Location *);
	virtual ~Location();
};

class Hillsborad :
	public Location
{
	Hillsborad();
	~Hillsborad();
};

class Ashenvale :
	public Location
{
	Ashenvale();
	~Ashenvale();
};

class Desolace :
	public Location
{
	Desolace();
	~Desolace();
};

class Stonetalon :
	public Location
{
	Stonetalon();
	~Stonetalon();
};

class TheBarrens :
	public Location
{
	TheBarrens();
	~TheBarrens();
};

class Swamp :
	public Location
{
	Swamp();
	~Swamp();
};

class Plaguelands :
	public Location
{
	Plaguelands();
	~Plaguelands();
};

class Stranglethorn :
	public Location
{
	Stranglethorn();
	~Stranglethorn();
};

class Wetlands :
	public Location
{
	Wetlands();
	~Wetlands();
};

#endif