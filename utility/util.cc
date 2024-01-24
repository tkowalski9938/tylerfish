#include "util.h"

// removes leading and trailing whitespace
std::string PRIVATE_trim(const std::string& line)
{
    const char* WhiteSpace = " \t\v\r\n";
    std::size_t start = line.find_first_not_of(WhiteSpace);
    std::size_t end = line.find_last_not_of(WhiteSpace);
    return start == end ? std::string() : line.substr(start, end - start + 1);
}

std::string util::readCommand() {
    std::string command;
    getline(std::cin, command);
    return PRIVATE_trim(command);
}