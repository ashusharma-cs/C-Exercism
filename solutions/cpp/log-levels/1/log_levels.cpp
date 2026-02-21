
#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message

    int startIndex=line.find(":");

    return line.substr(startIndex+2);
}

std::string log_level(std::string line) {
    // return the log level

    int startIndex=line.find("[");
    int endIndex=line.find("]");

    return line.substr(startIndex+1,endIndex-startIndex-1);
}

std::string reformat(std::string line) {
    // return the reformatted message

    std::string str=message(line);
    std::string err=log_level(line);

    return (str+" ("+err+")");
    
}
}  // namespace log_line
