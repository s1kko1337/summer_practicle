#pragma once
#include "Transport.h"

class Car : public Transport {
public:
    Car(std::string man, std::string mod, int y, double pwr, double price, std::string img)
        : Transport(man, mod, "�������� ����������", y, pwr, price, img) {}

    virtual std::string getMainInfo() const override {
        std::ostringstream oss;
        oss << "�����: " << manufacturer << "\r\n"
            << "������: " << model << "\r\n"
            << "��� ����������: " << type << "\r\n"
            << "��� ��� ������: �����\r\n"
            << "��� �������: " << year << "\r\n"
            << "��������: " << power << " �.�.\r\n"
            << "������� ����: " << averagePrice << " ���. ���\r\n";
        return oss.str();
    }

    std::string getAdditionalInfo() const override {
        std::ostringstream oss;
        oss << "------------------------------------------------\r\n";
        oss << "���-�� ����: 5 ����\r\n";
        oss << "����� ���������: 524 �\r\n";
        return oss.str();
    }
};
