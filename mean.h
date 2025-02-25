#ifndef MEAN_H
#define MEAN_H

#include "istatistics.h"

/*
 * Класс для вычисления среднего арифметического
 */
class Mean : public IStatistics {
    double sum;    // Сумма всех значений
    size_t count;  // Количество элементов

public:
    Mean();

    void update(double value) override;
    double result() const override;
    std::string name() const override;
};

#endif