#include <iostream>
#include <vector>

#include "Source/Include/Inventory.hpp"
#include "Source/Include/Item.hpp"
#include "Source/Include/Shield.hpp"

int main( )
{
    Inventory inventory;

    inventory.saveItem( new Shield( "Shield A", 100, Shield::SHIELD, 2 ));
    inventory.saveItem( new Shield( "Shield B", 200, Shield::SHIELD, 4 ));
    inventory.saveItem( new Shield( "Shield C", 300, Shield::SHIELD, 5 ));
    inventory.saveItem( new Shield( "Shield D", 400, Shield::SHIELD, 7 ));

    Shield *item = dynamic_cast<Shield *>(inventory.getItemInIndex( 2 ));

    item->print( );

    return 0;
}