#include "Include/Shield.hpp"

Shield::Shield( )
{
    setName( "None" );
    setPrice( 0 );
    setType( Item::NONE );
    defense = 0;
}

Shield::Shield( string nName, short nPrice, short nType, short nDefense ) : Item( nName, nPrice, nType )
{
    defense = nDefense;
}

void Shield::print( )
{
    Item::print( );

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
