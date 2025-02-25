#include "mean.h"

Mean::Mean() 
    : sum(0.0), count(0) {} // Инициализация нулями

void Mean::update(double value) {
    sum += value; // Добавляем новое значение к сумме
    ++count;      // Увеличиваем счетчик элементов
}

double Mean::result() const {
    return count == 0 ? 0.0 : sum / count; // Защита от деления на ноль
}

std::string Mean::name() const {
    return "mean";
}