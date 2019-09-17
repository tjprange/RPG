/*
This is the function implementation file for the Item class and the subclasses thereof.
*/

#include "Item.hpp"


/* Constructor for the Item class */
Item::Item()
{
}

/* Destructor for the item class */
Item::~Item()
{
}

/* This function will return the description an item */
string Item::getDescription()
{
	return this->description;
}

/* This function will return the healValue of an item */
int Item::getHealValue()
{
	return this->healValue;
}

/* Constructor for the Bandage class */
Bandage::Bandage()
{

}

/* Destructor for the Bandage class */
Bandage::~Bandage()
{

}

/* Constructor for the HealthStone class */
HealthStone::HealthStone()
{

}

/* Destructor for the HealthStone */
HealthStone::~HealthStone()
{

}

/* Constructor for the MedicinalHerb class */
MedicinalHerb::MedicinalHerb()
{

}

/* Destructor for the MedicinalHerb class */
MedicinalHerb::~MedicinalHerb()
{

}

/* Constructor for the BerzerkingStone */
BerzerkingStone::BerzerkingStone()
{

}

/* Destructor for the BerzerkingStone */
BerzerkingStone::~BerzerkingStone()
{

}