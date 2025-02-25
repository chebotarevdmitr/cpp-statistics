#ifndef ISTATISTICS_H
#define ISTATISTICS_H

#include <string>

/*
 * Базовый интерфейс для всех статистик.
 * Определяет единый API для обновления данных и получения результатов.
 */
class IStatistics {
public:
    /*
     * Виртуальный деструктор для корректного удаления объектов производных классов
     */
    virtual ~IStatistics() = default;

    /*
     * Обновляет внутреннее состояние статистики новым значением
     * @param value - новое значение из последовательности
     */
    virtual void update(double value) = 0;

    /*
     * Возвращает вычисленный результат статистики
     * @return численное значение характеристики
     */
    virtual double result() const = 0;

    /*
     * Возвращает название статистики (для вывода)
     * @return строка в формате "min", "max" и т.д.
     */
    virtual std::string name() const = 0;
};

#endif