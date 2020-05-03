// Design by Joan Andrés.

#ifndef SYSTEMINVENTORY_BLADE_HPP
#define SYSTEMINVENTORY_BLADE_HPP

#include "Item.hpp"

using namespace std;

class Blade : public Item
{

private:

	short attack;

public:

	Blade();

	Blade( string nName, short nPrice, short nAttack);

	void toString() override;

	short getAttack() const;

	void setAttack(short nAttack);
};


#endif //SYSTEMINVENTORY_BLADE_HPP
