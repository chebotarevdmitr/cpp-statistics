#ifndef PERCENTILE95_H
#define PERCENTILE95_H

#include "istatistics.h"
#include <vector>

/*
 * Класс для вычисления 95-го процентиля
 */
class Percentile95 : public IStatistics {
    std::vector<double> data;

public:
    void update(double value) override;
    double result() const override;
    std::string name() const override;
};

#endif