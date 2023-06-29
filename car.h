#ifndef CAR_H
#define CAR_H

enum class Engine
{
    Engine_1_4,
    Engine_1_6,
    Engine_2_0
};

enum class Body
{
    Sedan,
    Universal,
    Hatchback
};

enum class Wheel
{
    Size_13,
    Size_15,
    Size_17
};

struct Car
{
    Engine engine;
    Body body;
    Wheel wheels;
};

#endif // CAR_H
