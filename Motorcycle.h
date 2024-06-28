#pragma once
#include "Transport.h"

class Motorcycle : public Transport {
public:
    Motorcycle(std::string man, std::string mod, int y, double pwr, double price, std::string img)
        : Transport(man, mod, "Мотоцикл", y, pwr, price, img) {}

    std::string getInfo() const override {
        std::ostringstream oss;
        oss << Transport::getInfo();
        oss << "------------------------------------------------\r\n";
        oss << "Тип привода: Цепной\r\n";
        oss << "Рабочий объем: 847 см^3\r\n";
        return oss.str();
    }
};
