#pragma once
#include "Transport.h"

class Motorcycle : public Transport {
public:
    Motorcycle(std::string man, std::string mod, int y, double pwr, double price, std::string img)
        : Transport(man, mod, "��������", y, pwr, price, img) {}

    std::string getImage() const override {
        return this->image;
    }

    virtual std::string getMainInfo() const override{
        std::ostringstream oss;
        oss << "�����: " << manufacturer << "\r\n"
            << "������: " << model << "\r\n"
            << "��� ����������: " << type << "\r\n"
            << "��� �������: " << year << "\r\n"
            << "��������: " << power << " �.�.\r\n"
            << "������� ����: " << averagePrice << " ���. ���\r\n";
        return oss.str();
    }

    std::string getAdditionalInfo() const override {
        std::ostringstream oss;
        oss << "------------------------------------------------\r\n";
        oss << "��� �������: ������\r\n";
        oss << "������� �����: 847 ��^3\r\n";
        return oss.str();
    }
};
