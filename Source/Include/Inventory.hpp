#ifndef SYSTEMINVENTORY_INVENTORY_HPP
#define SYSTEMINVENTORY_INVENTORY_HPP

#include "Item.hpp"
#include "Shield.hpp"

class Inventory
{

public:

    static const short MAX_ITEM_INVENTORY = 4;

private:

    Item *inventory[MAX_ITEM_INVENTORY];

    /*
     * Return index of none item, it is (Item::NONE)
     * If the function cannot find a none item, return -1
     */
    short findIndexOfNoneItem( );

public:

    Inventory( );

    virtual ~Inventory( );

    void showInventory( );

    bool saveItem( Shield *nItem );

    Item *getItemInIndex( short index );

};

#endif //SYSTEMINVENTORY_INVENTORY_HPP
