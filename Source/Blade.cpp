// Design by Joan Andrés.

#include "Include/Blade.hpp"

// Construct

Blade::Blade()
{
 	attack = 0;
}

Blade::Blade(string nName, short nPrice, short nAttack) : Item(nName, nPrice, ItemType::BLADE)
{
	attack = nAttack;
}

// Function

void Blade::toString()
{
	Item::toString();

	cout << "Attack:" << attack << endl;
	cout << endl;
}

// Getters

short Blade::getAttack() const
{
	return attack;
}

// Setters

void Blade::setAttack(short nAttack)
{
	Blade::attack = nAttack;
}
