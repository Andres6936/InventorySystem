//
// Created by andres6936 on 4/06/19.
//

#include "Include/Item.hpp"

Item::Item( )
{
    name = "None";
    price = 0;
}

Item::Item( const string& nName, short nPrice, ItemType nType ) : type(nType)
{
    name = nName;
    price = nPrice;
}

void Item::toString( )
{
    cout << "Name:" << name << "\n";
    cout << "Price:" << price << "\n";
    cout << "Type:" << getStringOfType() << "\n";
}

// Getters

const string &Item::getName( ) const
{
    return name;
}

unsigned short Item::getPrice( ) const
{
	return price;
}

ItemType Item::getType( ) const
{
	return type;
}

string Item::getStringOfType() const
{
	switch (type)
	{
	case ItemType::NONE: return "None";
	case ItemType::SHIELD: return "Shield";
	case ItemType::BLADE: return "Blade";
	case ItemType::SABLE: return "Sable";
	default: return "Default";
	}
}

// Setters

void Item::setName( const string &nName )
{
    name = nName;
}

void Item::setPrice( unsigned short nPrice )
{
    price = nPrice;
}

