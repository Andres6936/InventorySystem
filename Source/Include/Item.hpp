#ifndef SYSTEMINVENTORY_ITEM_H
#define SYSTEMINVENTORY_ITEM_H

#include <iostream>

#include "EItemType.hpp"

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
    EItemType type;

public:

    /*
     * Default Construct
     */
    Item( );

    Item( const string& nName, short nPrice, EItemType nType );

    // Virtual Functions

    virtual void toString( );

    // Getters

    const string &getName( ) const;

	unsigned short getPrice( ) const;

	EItemType getType( ) const;

    // Setters

    void setName( const string &nName );

    void setPrice( unsigned short nPrice );

    void setType( EItemType nEtype );

};

#endif //SYSTEMINVENTORY_ITEM_H
