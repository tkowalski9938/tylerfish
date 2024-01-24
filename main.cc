#include <iostream>
#include "interface/guiToEng.h"
#include "interface/engToGui.h"
#include "utility/exception.h"

int main() {
   
   try{
        // currently only uci is supported, will throw if invald input given
        guiToEng::uci();
   } catch (exception::uciError& e) {
          std::cout << e.what() << std::endl;
          return 1;
   }
    
    engToGui::id("TylerFish", "Tyler Kowalski");
    engToGui::option();
    engToGui::uciok();
}