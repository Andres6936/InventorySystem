#include "Include/Inventory.hpp"

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

short Inventory::findIndexOfNoneItem( )
{
    return 0;
}

bool Inventory::saveItem( Item &nItem )
{
    return false;
}
