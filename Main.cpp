#include <iostream>
#include <vector>

#include "Source/Include/Inventory.hpp"
#include "Source/Include/Item.hpp"
#include "Source/Include/Shield.hpp"

using namespace std;

int main( )
{
    Inventory inventory;

    inventory.saveItem( new Shield( "Shield A", 100, ItemType::SHIELD, 2 ));
    inventory.saveItem( new Shield( "Shield B", 200, ItemType::SHIELD, 4 ));
    inventory.saveItem( new Shield( "Shield C", 300, ItemType::SHIELD, 5 ));
    inventory.saveItem( new Shield( "Shield D", 400, ItemType::SHIELD, 7 ));

    /*
     * The pointer stored in position 2 of the array points to a Shield type
     * object (derived from the Item base class), in order to work with this
     * pointer in a correct way, it is necessary to perform a "cast",
     * therefore dynamic_cast is used, for more details about this "why"
     * see the documentation of the {getItemInIndex} method of the
     * {Inventory} class.
     */
    Shield *item = dynamic_cast<Shield *>(inventory.getItemInIndex( 2 ));

    item->toString( );
    item->setDefense( 9 );
    cout << "New Defense:" << item->getDefense( ) << endl;

    return 0;
}