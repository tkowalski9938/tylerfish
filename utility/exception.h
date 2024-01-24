#ifndef _EXCEPTION_
#define _EXCEPTION_
#include <stdexcept>
#include <string>

namespace exception {
    class uciError : public std::runtime_error {
        public:
            uciError() : std::runtime_error("FATAL ERROR: uci command not given first") {}
    };  
}

#endif