#pragma once
#include <string>
#include <sstream>

class Transport {
protected:
    std::string manufacturer;
    std::string model;
    std::string type;
    int year;
    double power;
    double averagePrice;
    std::string image;

public:
    Transport(std::string man, std::string mod, std::string t, int y, double pwr, double price, std::string img)
        : manufacturer(man), model(mod), type(t), year(y), power(pwr), averagePrice(price), image(img) {}

    virtual ~Transport() {}
    virtual std::string getImage() const {
        return image;
    }

    virtual std::string getInfo() const {
        std::ostringstream oss;
        oss << "Марка: " << manufacturer << "\r\n"
            << "Модель: " << model << "\r\n"
            << "Тип транспорта: " << type << "\r\n"
            << "Год выпуска: " << year << "\r\n"
            << "Мощность: " << power << " л.с.\r\n"
            << "Средняя цена: " << averagePrice << " тыс. руб\r\n";
        return oss.str();
    }
};
