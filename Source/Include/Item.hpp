#ifndef SYSTEMINVENTORY_ITEM_H
#define SYSTEMINVENTORY_ITEM_H

#include <iostream>

#include "ItemType.hpp"

using namespace std;

class Item
{

private:

    /*
     * Item name
     *
     * Condition: name != empty()
     */
    string name;

    /*
     * Item price
     *
     * Condition: price >= 0
     */
    unsigned short price;

    /*
     * Item type
     */
    const ItemType type = ItemType::NONE;

public:

    /*
     * Default Construct
     */
    Item( );

    Item( const string& nName, short nPrice, ItemType nType );

    // Virtual Functions

    virtual void toString( );

    // Getters

    const string &getName( ) const;

	unsigned short getPrice( ) const;

	ItemType getType( ) const;

	string getStringOfType() const;

    // Setters

    void setName( const string &nName );

    void setPrice( unsigned short nPrice );

};

#endif //SYSTEMINVENTORY_ITEM_H
