#include <iostream>
#include <vector>

#include "Source/Include/Item.hpp"
#include "Source/Include/Shield.hpp"

int main( )
{
    Item *array[4];

    Shield childA = Shield( );

    array[ 0 ] = &childA;

    array[ 0 ]->print( );

    array[ 1 ] = new Shield( );

    array[ 1 ]->print( );

    delete array[ 1 ];
    array[ 1 ] = new Shield( "Shield Wood", 1000, Shield::SHIELD, 5 );

    array[ 1 ]->print( );

    delete array[ 1 ];
    array[ 1 ] = new Shield( "Shield Plate", 1200, Shield::SHIELD, 8 );

    array[ 1 ]->print( );

    delete array[ 1 ];
    array[ 1 ] = new Shield( "Shield Steel", 1600, Shield::SHIELD, 12 );

    array[ 1 ]->print( );

    array[ 2 ] = new Shield( "Shield Gold", 2400, Shield::SHIELD, 18 );

    array[ 2 ]->print( );

    array[ 3 ] = new Shield( "Shield Diamont", 3600, Shield::SHIELD, 36 );

    array[ 3 ]->print( );

    delete array[ 1 ];
    delete array[ 2 ];
    delete array[ 3 ];

    return 0;
}