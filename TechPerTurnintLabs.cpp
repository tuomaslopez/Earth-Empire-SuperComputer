#include <math.h>
int TechPerTurn(int Labs, int Land) {
    double result = 0.17 * Labs * (1 + static_cast<double>(Labs) / Land) + 3;
    return static_cast<int>(round(result));
}

