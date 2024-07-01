#pragma once
#include "Transport.h"

class Motorcycle : public Transport {
public:
    Motorcycle(std::string man, std::string mod, int y, double pwr, double price, std::string img)
        : Transport(man, mod, "Мотоцикл", y, pwr, price, img) {}

    std::string getImage() const override {
        return this->image;
    }

    virtual std::string getMainInfo() const override{
        std::ostringstream oss;
        oss << "Марка: " << manufacturer << "\r\n"
            << "Модель: " << model << "\r\n"
            << "Тип транспорта: " << type << "\r\n"
            << "Год выпуска: " << year << "\r\n"
            << "Мощность: " << power << " л.с.\r\n"
            << "Средняя цена: " << averagePrice << " тыс. руб\r\n";
        return oss.str();
    }

    std::string getAdditionalInfo() const override {
        std::ostringstream oss;
        oss << "------------------------------------------------\r\n";
        oss << "Тип привода: Цепной\r\n";
        oss << "Рабочий объем: 847 см^3\r\n";
        return oss.str();
    }
};
