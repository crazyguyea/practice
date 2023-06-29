#include "carassemblyfacade.h"

Car CarAssemblyFacade::assembleCar(Engine engine, Body body, Wheel wheels)
{
    Car car;
    car.engine = engine;
    car.body = body;
    car.wheels = wheels;
    return car;
}
