#pragma once
#include "Transport.h"

class Motorcycle : public Transport {
public:
    Motorcycle(std::string man, std::string mod, int y, double pwr, double price, std::string img)
        : Transport(man, mod, "��������", y, pwr, price, img) {}

    std::string getInfo() const override {
        std::ostringstream oss;
        oss << Transport::getInfo();
        oss << "------------------------------------------------\r\n";
        oss << "��� �������: ������\r\n";
        oss << "������� �����: 847 ��^3\r\n";
        return oss.str();
    }
};
