#include <iostream>
 
#include "ERT_RF_Protocol_Interface/PacketDef.h"

struct S
{
    // three-bit unsigned field, allowed values are 0...7
    unsigned int b : 3;
};
 
int main()
{
    S s = {6};

    radio_packet p;
    p.baro_alt = 100;
    std::cout << p.baro_alt << '\n';
 
    ++s.b; // store the value 7 in the bit-field
    std::cout << s.b << '\n';
 
    ++s.b; // the value 8 does not fit in this bit-field
    std::cout << s.b << '\n'; // formally implementation-defined, typically 0
}