#ifndef PERCENTILE90_H
#define PERCENTILE90_H

#include "istatistics.h"
#include <vector>

/*
 * Класс для вычисления 90-го процентиля
 */
class Percentile90 : public IStatistics {
    std::vector<double> data; // Хранит все значения для сортировки

public:
    void update(double value) override;
    double result() const override;
    std::string name() const override;
};

#endif