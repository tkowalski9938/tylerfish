#ifndef _ENGTOGUI_
#define _ENGTOGUI_
#include <string>

namespace engToGui {
    // id command
    void id(std::string name, std::string author);

    // option commmand
    void option();

    // uciok command [id and options sent, ready in UCI mode]
    void uciok();
}


#endif