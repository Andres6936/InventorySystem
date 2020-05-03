#include "Include/Shield.hpp"

Shield::Shield( )
{
    setName( "None" );
    setPrice( 0 );
    setType( ItemType::NONE );
    defense = 0;
}

Shield::Shield( string nName, short nPrice, ItemType nType, short nDefense ) : Item( nName, nPrice, nType )
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
