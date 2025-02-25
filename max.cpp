#include "max.h"
#include <limits>

// Конструктор должен быть реализован
Max::Max() : maxValue(-std::numeric_limits<double>::max()) {}

void Max::update(double value) {
    if (value > maxValue) {
        maxValue = value;
    }
}

double Max::result() const {
    return maxValue;
}

std::string Max::name() const {
    return "max";
}