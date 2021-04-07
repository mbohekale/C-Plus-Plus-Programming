#ifndef WANDERER_H
#define WANDERER_H
#include <iostream>
#include "Creatures.h"

using namespace std;


class wanderer : public Creatures
{
    public:
        wanderer();
        void sayName();

};

#endif // WANDERER_H
