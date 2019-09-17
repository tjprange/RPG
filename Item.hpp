#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>
using std::string;
class Item
{
protected:
	string description;
	int healValue;
public:
	Item();
	string getDescription();
	int getHealValue();
	virtual ~Item();
};

/* The Bandage class definition. It will heal a small amount of HP */
class Bandage :
	public Item
{
public:
	Bandage();
	~Bandage();
};

/* The Healthstone class definition. It will heal double the amount of HP as the bandage */
class HealthStone :
	public Item
{
public:
	HealthStone();
	~HealthStone();
};

/* The MedicinalHerb class definition. It will cure one ailment (disease or poison) */
class MedicinalHerb :
	public Item
{
public:
	MedicinalHerb();
	~MedicinalHerb();
};

/* The BerzerkingStone class definition. It will double the player's attack value. */
class BerzerkingStone :
	public Item
{
public:
	BerzerkingStone();
	~BerzerkingStone();
};

#endif
