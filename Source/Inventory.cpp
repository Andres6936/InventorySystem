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
        if ( inventory[ i ]->getType( ) == EItemType::NONE )
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

Item *Inventory::getItemInIndex( short index )
{
    return inventory[ index ];
}
