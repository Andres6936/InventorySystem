#include "Include/Inventory.hpp"
#include "Include/Shield.hpp"

Inventory::Inventory( )
{
    for ( short i = 0; i < MAX_ITEM_INVENTORY; i++ )
    {
        inventory[ i ] = new Item( );
    }
}

Inventory::~Inventory( )
{
    for ( short i = 0; i < MAX_ITEM_INVENTORY; i++ )
    {
        delete inventory[ i ];
    }
}

void Inventory::showInventory( )
{

}

short Inventory::findIndexOfNoneItem( )
{
    for ( short i = 0; i < MAX_ITEM_INVENTORY; i++ )
    {
        // If the item is type none
        if ( inventory[ i ]->getType( ) == Item::NONE )
        {
            // Return the index of item in array
            return i;
        }
    }

    return -1;
}

bool Inventory::saveItem( Shield *nItem )
{
    short index = findIndexOfNoneItem( );

    if ( index == -1 )
    {
        return false;
    }
    else
    {
        // Delete the old Item
        delete inventory[ index ];
        // Store the new Item
        inventory[ index ] = nItem;
        return true;
    }
}

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
Item *Inventory::getItemInIndex( short index )
{
    return inventory[ index ];
}
