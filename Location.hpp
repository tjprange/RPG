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
	virtual string getName();
	void setNorth(Location *);
	void setEast(Location *);
	void setSouth(Location *);
	void setWest(Location *);
	virtual ~Location();
};

class Hillsborad :
	public Location
{
public:
	Hillsborad();
	~Hillsborad();
};

class Ashenvale :
	public Location
{
public:
	Ashenvale();
	~Ashenvale();
};

class Desolace :
	public Location
{
public:
	Desolace();
	~Desolace();
};

class Stonetalon :
	public Location
{
public:
	Stonetalon();
	~Stonetalon();
};

class Barrens :
	public Location
{
public:
	Barrens();
	~Barrens();
};

class Swamp :
	public Location
{
public:
	Swamp();
	~Swamp();
};

class Plaguelands :
	public Location
{
public:
	Plaguelands();
	~Plaguelands();
};

class Stranglethorn :
	public Location
{
public:
	Stranglethorn();
	~Stranglethorn();
};

class Wetlands :
	public Location
{
public:
	Wetlands();
	~Wetlands();
};

#endif