#ifndef MAX_H
#define MAX_H

#include "istatistics.h"

class Max : public IStatistics {
    double maxValue;
public:
    Max(); // Должен быть объявлен
    void update(double value) override;
    double result() const override;
    std::string name() const override;
};

#endif