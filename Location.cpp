/*
This is the function implementation file for the Location and it's subclasses.
*/

#include "Location.hpp"


/* Location serves as the base class for the following locations */
Location::Location() {}

/* This function will return the location's name */
string Location::getName()
{
	return this->name;
}

/* This function will return the locations' description */
string Location::getDescription()
{
	return this->description;
}

/* Sets the Location's north pointer to the parameter */
void Location::setNorth(Location *location)
{
	this->north = location;
}

/* Sets the Location's east pointer to the parameter */
void Location::setEast(Location *location)
{
	this->east = location;
}

/* Sets the Location's south pointer to the parameter */
void Location::setSouth(Location *location)
{
	this->south = location;
}

/* Sets the Location's north pointer to the parameter */
void Location::setWest(Location *location)
{
	this->west = location;
}

/* Returns the address of the Location's north pointer */
Location * Location::getNorth()
{
	return this->north;
}

/* Returns the address of the Location's east pointer */
Location * Location::getEast()
{
	return this->east;
}

/* Returns the address of the Location's south pointer */
Location * Location::getSouth()
{
	return this->south;
}

/* Returns the address of the Location's west pointer */
Location * Location::getWest()
{
	return this->west;
}

Location::~Location() {}


/* Hillsborad class */
Hillsborad::Hillsborad() 
{
	this->name = "Hillsborad Foothills";
	this->description = "Grassy, rolling hills and teeming with wildlife.";
}

Hillsborad::~Hillsborad() {};


/* Barrens class */
Barrens::Barrens()
{
	this->name = "The Barrens";
	this->description = "A massive savanah, with a few desert oases scattered throughout.";
}

Barrens::~Barrens() {}

/* Ashenvale class */
Ashenvale::Ashenvale() 
{
	this->name = "Ashenvale";
	this->description = "A thick, magical forest.";
}

Ashenvale::~Ashenvale() {}

/* Desolace class */
Desolace::Desolace() 
{
	this->name = "Desolace";
	this->description = "A barren wastland.";
}

Desolace::~Desolace() {}

/* Stonetalon class */
Stonetalon::Stonetalon() 
{
	this->name = "Stonetalon Mountains";
	this->description = " A range of treacherous mountain peaks.";
}

Stonetalon::~Stonetalon() {}

/* Swamp class */
Swamp::Swamp() 
{
	this->name = "The Swamp of Sorrows";
	this->description = "An uninhabitable, stagnant marshland of sucking bogs.";
}

Swamp::~Swamp() {}

/* Plaguelands */
Plaguelands::Plaguelands() 
{
	this->name = "The Plaguelands";
	this->description = "A land tainted by plague, famine and disease.";
}

Plaguelands::~Plaguelands() {}

/* Plaguelands */
Stranglethorn::Stranglethorn() 
{
	this->name = "Stranglethorn Vale";
	this->description = "A coastal jungle full of dangerous tribes";
}

Stranglethorn::~Stranglethorn() {}

/* Wetlands */
Wetlands::Wetlands() 
{
	this->name = "The Wetlands";
	this->description = "A vast, cold swamp with pits of quicksand.";
}

Wetlands::~Wetlands() {}