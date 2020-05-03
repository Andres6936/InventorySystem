#include "Include/Inventory.hpp"
#include "Include/Shield.hpp"

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

bool Inventory::saveItem( Item *nItem )
{
    inventory.push_back(nItem);
}

Item *Inventory::getItemInIndex( short index )
{
    return inventory[ index ];
}
