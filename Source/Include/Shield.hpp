#ifndef SYSTEMINVENTORY_SHIELD_HPP
#define SYSTEMINVENTORY_SHIELD_HPP

#include "Item.hpp"

class Shield : public Item
{

private:

    int thing;

public:

    Shield( )
    {
        thing = 0;
    }

    Shield( int nTest, int nThing ) : Item( nTest )
    {
        thing = nThing;
    }

    void print( ) override
    {
        std::cout << thing << std::endl;
    }
};

#endif //SYSTEMINVENTORY_SHIELD_HPP
