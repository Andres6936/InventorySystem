#ifndef SYSTEMINVENTORY_SHIELD_HPP
#define SYSTEMINVENTORY_SHIELD_HPP

#include "Item.hpp"

using namespace std;

class Shield : public Item
{

public:

    static const short SHIELD = 99;

private:

    short defense;

public:

    Shield( );

    Shield( string nName, short nPrice, short nType, short nDefense );

    void print( ) override;

    short getDefense( ) const;

    void setDefense( short nDefense );

};

#endif //SYSTEMINVENTORY_SHIELD_HPP
