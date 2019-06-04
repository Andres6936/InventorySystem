#ifndef SYSTEMINVENTORY_ITEM_H
#define SYSTEMINVENTORY_ITEM_H

#include <iostream>

using namespace std;

class Item
{

public:

    static const short NONE = 0;

private:

    string name;
    short price;
    short type;

public:

    Item( );

    Item( string nName, short nPrice, short nType );

    virtual void print( );

    const string &getName( ) const;

    void setName( const string &nName );

    short getPrice( ) const;

    void setPrice( short nPrice );

    short getType( ) const;

    void setType( short nType );

};

#endif //SYSTEMINVENTORY_ITEM_H
