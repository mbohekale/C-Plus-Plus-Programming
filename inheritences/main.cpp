#include <iostream>
#include "Creatures.h"
#include "sandWalker.h"
#include "sponger.h"
#include "wanderer.h"
using namespace std;

int main()
{
    Creatures cr;
    cr.sayName();

    wanderer w;
    w.sayName();

    sandWalker s;
    s.sayName();

    sponger sp;
    sp.sayName();

    return 0;
}
