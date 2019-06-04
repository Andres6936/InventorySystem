#include <iostream>
#include <vector>

#include "Source/Include/Item.hpp"
#include "Source/Include/Shield.hpp"

int main( )
{
    Item *array[4];

    Shield childA = Shield( 2, 4 );
    array[ 0 ] = &childA;

    array[ 0 ]->print( );

    array[ 1 ] = new Shield( 6, 8 );

    array[ 1 ]->print( );

    delete array[ 1 ];
    array[ 1 ] = new Shield( 10, 12 );

    array[ 1 ]->print( );

    delete array[ 1 ];
    array[ 1 ] = new Shield( 14, 16 );

    array[ 1 ]->print( );

    delete array[ 1 ];
    array[ 1 ] = new Shield( 18, 20 );

    array[ 1 ]->print( );

    array[ 2 ] = new Shield( 22, 24 );

    array[ 2 ]->print( );

    array[ 3 ] = new Shield( 26, 28 );

    array[ 3 ]->print( );

    delete array[ 1 ];
    delete array[ 2 ];
    delete array[ 3 ];

    return 0;
}