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
     * Condition: name != null
     */
    string name;

    /*
     * Item price
     *
     * Condition: price >= 0
     */
    short price;

    /*
     * Item type
     */
    EItemType type;

public:

    /*
     * Default Construct
     */
    Item( );

    Item( string nName, short nPrice, EItemType nType );

    virtual void toString( );

    const string &getName( ) const;

    void setName( const string &nName );

    short getPrice( ) const;

    void setPrice( short nPrice );

    EItemType getType( ) const;

    void setType( EItemType nEtype );

};

#endif //SYSTEMINVENTORY_ITEM_H
