#include "bodyassembler.h"

QString BodyAssembler::run(Body body)
{
    switch (body)
    {
        case Body::Sedan:
            return "Седан";
        case Body::Universal:
            return "Универсал";
        case Body::Hatchback:
            return "Хэтчбэк";
        default:
            return "";
    }
}
