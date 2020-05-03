#ifndef SYSTEMINVENTORY_SHIELD_HPP
#define SYSTEMINVENTORY_SHIELD_HPP

#include "Item.hpp"

using namespace std;

class Shield : public Item
{

private:

    short defense;

public:

    Shield( );

    Shield( string nName, short nPrice, ItemType nType, short nDefense );

    // Override

    void toString( ) override;

    // Getters

    short getDefense( ) const;

    // Setters

    void setDefense( short nDefense );

};

#endif //SYSTEMINVENTORY_SHIELD_HPP
