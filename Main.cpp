#include <iostream>
#include <vector>

class Parent
{

private:

    int test;

public:

    Parent( )
    {
        test = 0;
    }

    Parent( int nTest )
    {
        test = nTest;
    }

    void print( )
    {
        std::cout << test << std::endl;
    }

};

class Child : public Parent
{

private:

    int thing;

public:

    Child( )
    {
        thing = 0;
    }

    Child( int nTest, int nThing ) : Parent( nTest )
    {
        thing = nThing;
    }

    void print( )
    {
        std::cout << thing << std::endl;
    }

};

int main( )
{
    Parent *array[4];

    Child childA = Child( 2, 4 );
    array[ 0 ] = &childA;

    array[ 0 ]->print( );
    static_cast<Child *> (array[ 0 ])->print( );

    array[ 1 ] = new Child( 6, 8 );

    array[ 1 ]->print( );
    static_cast<Child *> (array[ 1 ])->print( );

    delete array[ 1 ];
    array[ 1 ] = new Child( 10, 12 );

    array[ 1 ]->print( );
    static_cast<Child *> (array[ 1 ])->print( );

    delete array[ 1 ];
    array[ 1 ] = new Child( 14, 16 );

    array[ 1 ]->print( );
    static_cast<Child *> (array[ 1 ])->print( );

    delete array[ 1 ];
    array[ 1 ] = new Child( 18, 20 );

    array[ 1 ]->print( );
    static_cast<Child *> (array[ 1 ])->print( );

    array[ 2 ] = new Child( 22, 24 );

    array[ 2 ]->print( );
    static_cast<Child *> (array[ 2 ])->print( );

    array[ 3 ] = new Child( 26, 28 );

    array[ 3 ]->print( );
    static_cast<Child *> (array[ 3 ])->print( );

    delete array[ 1 ];
    delete array[ 2 ];
    delete array[ 3 ];

    return 0;
}