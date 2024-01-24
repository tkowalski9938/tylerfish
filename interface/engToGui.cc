#include "engToGui.h"
#include <iostream>

// id command
void engToGui::id(std::string name, std::string author) {
    std::cout << "id name " << name << std::endl;
    std::cout << "id author " << author << std::endl;
}

// option commmand
void engToGui::option() {

}

 // uciok command [id and options sent, ready in UCI mode]
void engToGui::uciok() {
    std::cout << "uciok" << std::endl;
}