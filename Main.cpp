#include <iostream>
#include <vector>

#include "Source/Include/Inventory.hpp"
#include "Source/Include/Item.hpp"
#include "Source/Include/Shield.hpp"

int main( )
{
    Inventory inventory;

    inventory.saveItem( new Shield( "Shield A", 100, EItemType::SHIELD, 2 ));
    inventory.saveItem( new Shield( "Shield B", 200, EItemType::SHIELD, 4 ));
    inventory.saveItem( new Shield( "Shield C", 300, EItemType::SHIELD, 5 ));
    inventory.saveItem( new Shield( "Shield D", 400, EItemType::SHIELD, 7 ));

    Shield *item = dynamic_cast<Shield *>(inventory.getItemInIndex( 2 ));

    item->toString( );

    return 0;
}