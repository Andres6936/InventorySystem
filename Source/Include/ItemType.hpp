#ifndef SYSTEMINVENTORY_ITEMTYPE_HPP
#define SYSTEMINVENTORY_ITEMTYPE_HPP

enum class ItemType : unsigned char
{
    // Any object of this type must
    // be treated as a null object.
	NONE,
    SHIELD,
    BLADE,
    SABLE
};

#endif //SYSTEMINVENTORY_ITEMTYPE_HPP
