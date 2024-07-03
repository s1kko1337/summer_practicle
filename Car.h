#pragma once
#include "Transport.h"

class Car : public Transport {
public:
    Car(std::string man, std::string mod, int y, double pwr, double price, std::string img)
        : Transport(man, mod, "Легковой автомобиль", y, pwr, price, img) {}

    virtual std::string getMainInfo() const override {
        std::ostringstream oss;
        oss << "Марка: " << manufacturer << "\r\n"
            << "Модель: " << model << "\r\n"
            << "Тип транспорта: " << type << "\r\n"
            << "Тип тип кузова: Седан\r\n"
            << "Год выпуска: " << year << "\r\n"
            << "Мощность: " << power << " л.с.\r\n"
            << "Средняя цена: " << averagePrice << " тыс. руб\r\n";
        return oss.str();
    }

    std::string getAdditionalInfo() const override {
        std::ostringstream oss;
        oss << "------------------------------------------------\r\n";
        oss << "Кол-во мест: 5 мест\r\n";
        oss << "Объем багажника: 524 л\r\n";
        return oss.str();
    }
};
