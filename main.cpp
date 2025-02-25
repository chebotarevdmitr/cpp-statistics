#include <iostream>
#include <vector>
#include <memory> // Для unique_ptr
#include "istatistics.h" // Ensure this header file defines the IStatistics interface
#include "min.h"
#include "max.h"
#include "mean.h"
#include "stddev.h"
#include "percentile90.h"
#include "percentile95.h"

int main() {
    // Создаем список всех статистик
    std::vector<std::unique_ptr<IStatistics>> stats;
    stats.push_back(std::make_unique<Min>());
    stats.push_back(std::make_unique<Max>());
    stats.push_back(std::make_unique<Mean>());
    stats.push_back(std::make_unique<StdDev>());
    stats.push_back(std::make_unique<Percentile90>());
    stats.push_back(std::make_unique<Percentile95>());

    double value;
    // Чтение данных до EOF
    while (std::cin >> value) {
        for (auto& stat : stats) {
            stat->update(value); // Обновляем каждую статистику
        }
    }

    // Вывод результатов
    for (const auto& stat : stats) {
        std::cout << stat->name() << " = " << stat->result() << std::endl;
    }

    return 0;
}