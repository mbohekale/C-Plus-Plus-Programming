#ifndef SANDWALKER_H
#define SANDWALKER_H
#include <iostream>
#include "Creatures.h"
#include "sandWalker.h"

using namespace std;


class sandWalker : public Creatures
{
    public:
        sandWalker();
        void sayName();
};

#endif // SANDWALKER_H
