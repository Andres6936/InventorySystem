#ifndef SYSTEMINVENTORY_INVENTORY_HPP
#define SYSTEMINVENTORY_INVENTORY_HPP

#include "Item.hpp"
#include "Shield.hpp"

#include <vector>

class Inventory
{

public:

    /*
     * Maximum number of items that can be stored in the inventory.
     */
    static const short MAX_ITEM_INVENTORY = 4;

private:

    vector<Item*> inventory;

public:

    virtual ~Inventory( );

    void showInventory( );

    bool saveItem( Item *nItem );

    /*
     * The goal of {inventory} is to store pointers that point to Item objects and also
     * pointers that point to objects of classes derived from Item, this in a way to
     * avoid the Slicing Object.
     *
     * To work with a pointer that points to an object different from the Item class,
     * (i.e. an object built using a derived class), it is necessary to realize
     * a "cast", however the correct way to realize this "cast" is with
     * the keyword dynamic_cast.
     *
     * A reason for this could be given in the definition of David Rodriguez:
     *
     * Define of dynamic_cast:
     *
     *      "Given a class Base of which there is a derived class
     *      Derived, dynamic_cast will convert a Base pointer to
     *      a Derived pointer if and only if the actual object
     *      pointed at is in fact a Derived object."
     *
     *                  - David Rodríguez - StackOverflow
     *                  - Question - 2253168 - Feb 2010
     *
     * Example:
     *
     *      If there is an index in the array (i.e. {inventory}) that stores a Shield
     *      type object (derived from Item) it is necessary to realize a dynamic_cast
     *      to work with the returned pointer, just like this:
     *
     *      >>> Shield *shield = dynamic_cast< Shield * > (inventory.getItemInIndex( int ));
     *
     * It is necessary to emphasize that if the pointer points to an Item type object
     * this "cast" is not necessary.
     *
     */
    Item *getItemInIndex( short index );

};

#endif //SYSTEMINVENTORY_INVENTORY_HPP
