#include "stddev.h"
#include <cmath> // Для std::sqrt

StdDev::StdDev() 
    : sum(0.0), sumSq(0.0), count(0) {}

void StdDev::update(double value) {
    sum += value;        // Обновляем сумму
    sumSq += value * value; // Обновляем сумму квадратов
    ++count;
}

double StdDev::result() const {
    if (count == 0) return 0.0;

    double mean = sum / count;
    // Формула стандартного отклонения: sqrt( (sum(x²) - (sum(x))²/N ) / N )
    double variance = (sumSq - (sum * sum) / count) / count;
    return std::sqrt(variance);
}

std::string StdDev::name() const {
    return "std";
}