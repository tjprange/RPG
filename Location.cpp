/*
This is the function implementation file for the Location and it's subclasses.
*/

#include "Location.hpp"

Location::Location() {}

string Location::getName()
{
	return this->name;
}

void Location::setNorth(Location *location)
{
	this->north = location;
}

void Location::setEast(Location *location)
{
	this->east = location;
}

void Location::setSouth(Location *location)
{
	this->south = location;
}

void Location::setWest(Location *location)
{
	this->west = location;
}

Location::~Location() {}

Hillsborad::Hillsborad() 
{
	this->name = "Hillsborad Foothills";
}

Hillsborad::~Hillsborad() {};

Barrens::Barrens()
{
	this->name = "The Barrens";
}

Barrens::~Barrens() {}

Ashenvale::Ashenvale() 
{
	this->name = "Ashenvale";
}

Ashenvale::~Ashenvale() {}

Desolace::Desolace() 
{
	this->name = "Desolace";
}

Desolace::~Desolace() {}

Stonetalon::Stonetalon() 
{
	this->name = "Stonetalon Mountains";
}

Stonetalon::~Stonetalon() {}

Swamp::Swamp() 
{
	this->name = "The Swamp of Sorrows";
}

Swamp::~Swamp() {}

Plaguelands::Plaguelands() 
{
	this->name = "The Plaguelands";
}

Plaguelands::~Plaguelands() {}

Stranglethorn::Stranglethorn() 
{
	this->name = "Stranglethorn Vale";
}

Stranglethorn::~Stranglethorn() {}

Wetlands::Wetlands() 
{
	this->name = "The Wetlands";
}

Wetlands::~Wetlands() {}