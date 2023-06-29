#include "engineassembler.h"

QString EngineAssembler::run(Engine engine)
{
    switch (engine)
    {
        case Engine::Engine_1_4:
            return "1.4";
        case Engine::Engine_1_6:
            return "1.6";
        case Engine::Engine_2_0:
            return "2.0";
        default:
            return "";
    }
}
