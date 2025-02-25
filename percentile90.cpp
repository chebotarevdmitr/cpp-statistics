#include "percentile90.h"
#include <algorithm> // Для std::sort
#include <cmath>     // Для std::ceil

void Percentile90::update(double value) {
    data.push_back(value); // Сохраняем все значения
}

double Percentile90::result() const {
    if (data.empty()) return 0.0;

    std::vector<double> sorted(data); // Копируем данные для сортировки
    std::sort(sorted.begin(), sorted.end()); // Сортируем

    // Формула: позиция = (процентиль / 100) * (N - 1) + 1
    double pos = 0.9 * sorted.size();
    int index = static_cast<int>(std::ceil(pos)) - 1; // Индекс в массиве

    // Защита от выхода за границы
    index = std::max(0, std::min(index, static_cast<int>(sorted.size() - 1)));
    return sorted[index];
}

std::string Percentile90::name() const {
    return "pct90";
}