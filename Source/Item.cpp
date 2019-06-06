//
// Created by andres6936 on 4/06/19.
//

#include "Include/Item.hpp"

Item::Item( )
{
    name = "None";
    price = 0;
    type = EItemType::NONE;
}

Item::Item( string nName, short nPrice, EItemType nType )
{
    name = nName;
    price = nPrice;
    type = nType;
}

void Item::toString( )
{
    cout << "Name:" << name << endl;
    cout << "Price:" << price << endl;
    cout << "Type:" << type << endl;
}

const string &Item::getName( ) const
{
    return name;
}

void Item::setName( const string &nName )
{
    name = nName;
}

short Item::getPrice( ) const
{
    return price;
}

void Item::setPrice( short nPrice )
{
    price = nPrice;
}

EItemType Item::getType( ) const
{
    return type;
}

void Item::setType( EItemType nEtype )
{
    type = nEtype;
}
