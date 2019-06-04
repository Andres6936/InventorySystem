#ifndef SYSTEMINVENTORY_INVENTORY_HPP
#define SYSTEMINVENTORY_INVENTORY_HPP

#include "Item.hpp"

class Inventory
{

public:

    static const short MAX_ITEM_INVENTORY = 6;

private:

    Item *inventory[MAX_ITEM_INVENTORY];

    /*
     * Return index of none item, it is (Item::NONE)
     * If the function cannot find a none item, return -1
     */
    short findIndexOfNoneItem( );

public:

    Inventory( );

    bool saveItem( Item &nItem );

};

#endif //SYSTEMINVENTORY_INVENTORY_HPP
