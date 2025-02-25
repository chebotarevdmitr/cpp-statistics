#include "min.h"
#include <limits> // Для std::numeric_limits

Min::Min() 
    : minValue(std::numeric_limits<double>::max()) { 
    // Инициализируем минимальным значением типа double
}

void Min::update(double value) {
    if (value < minValue) {
        minValue = value; // Обновляем минимум при нахождении меньшего значения
    }
}

double Min::result() const {
    return minValue; // Возвращаем текущий минимум
}

std::string Min::name() const {
    return "min"; // Название для вывода
}