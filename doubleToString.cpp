#include "doubleToString.h"
#include <iostream>
#include <sstream>
std::string doubleToString(double val)
{
    std::ostringstream out;
    out << val;
    return out.str();
}
