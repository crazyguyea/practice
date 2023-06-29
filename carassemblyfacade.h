#ifndef CARASSEMBLYFACADE_H
#define CARASSEMBLYFACADE_H

#include "car.h"

class CarAssemblyFacade
{
public:
    static Car assembleCar(Engine engine, Body body, Wheel wheels);
};

#endif // CARASSEMBLYFACADE_H
