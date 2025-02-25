#ifndef MIN_H
#define MIN_H

#include "istatistics.h"

/*
 * Класс для вычисления минимального значения последовательности
 */
class Min : public IStatistics {
    double minValue; // Текущее минимальное значение

public:
    Min();

    void update(double value) override;
    double result() const override;
    std::string name() const override;
};

#endif