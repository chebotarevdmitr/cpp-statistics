#include "percentile95.h"
#include <algorithm>
#include <cmath>

void Percentile95::update(double value) {
    data.push_back(value);
}

double Percentile95::result() const {
    if (data.empty()) return 0.0;

    std::vector<double> sorted(data);
    std::sort(sorted.begin(), sorted.end());

    double pos = 0.95 * sorted.size();
    int index = static_cast<int>(std::ceil(pos)) - 1;

    index = std::max(0, std::min(index, static_cast<int>(sorted.size() - 1)));
    return sorted[index];
}

std::string Percentile95::name() const {
    return "pct95";
}