#ifndef SPONGER_H
#define SPONGER_H
#include <iostream>
#include "Creatures.h"

using namespace std;


class sponger : public Creatures
{
    public:
        sponger();
        void sayName();

};

#endif // SPONGER_H
