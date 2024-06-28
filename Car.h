#pragma once
#include "Transport.h"

class Car : public Transport {
public:
    Car(std::string man, std::string mod, int y, double pwr, double price, std::string img)
        : Transport(man, mod, "�������� ����������", y, pwr, price, img) {}

    std::string getImage() const override {
        return this->image;
    }

    std::string getInfo() const override {
        std::ostringstream oss;
        oss << Transport::getInfo();
        oss << "------------------------------------------------\r\n";
        oss << "���-�� ����: 5 ����\r\n";
        oss << "����� ���������: 524 �\r\n";
        return oss.str();
    }
};
