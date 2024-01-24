#include "guiToEng.h"
#include "../utility/util.h"
#include <iostream>

void guiToEng::uci() {
    std::string command = util::readCommand();
    
    if (command != "uci") {
        throw exception::uciError();
    }
}
