#include "Include/Shield.hpp"

Shield::Shield( )
{
    setName( "None" );
    setPrice( 0 );
    defense = 0;
}

Shield::Shield( string nName, short nPrice, short nDefense ) : Item( nName, nPrice, ItemType::SHIELD )
{
    defense = nDefense;
}

void Shield::toString( )
{
    Item::toString( );

    cout << "Defense:" << defense << endl;
    cout << endl;
}

short Shield::getDefense( ) const
{
    return defense;
}

void Shield::setDefense( short nDefense )
{
    defense = nDefense;
}
