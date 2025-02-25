#ifndef STDDEV_H
#define STDDEV_H

#include "istatistics.h"

/*
 * Класс для вычисления стандартного отклонения
 */
class StdDev : public IStatistics {
    double sum;    // Сумма значений
    double sumSq;  // Сумма квадратов значений
    size_t count;  // Количество элементов

public:
    StdDev();

    void update(double value) override;
    double result() const override;
    std::string name() const override;
};

#endif