#ifndef SYSTEMINVENTORY_ITEM_H
#define SYSTEMINVENTORY_ITEM_H

#include <iostream>

class Item
{

private:

    int test;

public:

    Item( )
    {
        test = 0;
    }

    explicit Item( int nTest )
    {
        test = nTest;
    }

    virtual void print( )
    {
        std::cout << test << std::endl;
    }
};

#endif //SYSTEMINVENTORY_ITEM_H
