#include "wheelsassembler.h"

QString WheelsAssembler::run(Wheel wheel)
{
    switch (wheel)
    {
        case Wheel::Size_13:
            return "13";
        case Wheel::Size_15:
            return "15";
        case Wheel::Size_17:
            return "17";
        default:
            return "";
    }
}
