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

    virtual std::string getImage() const = 0;
    virtual std::string getMainInfo() const = 0;
    virtual std::string getAdditionalInfo() const = 0;

    virtual std::string getInfo() const {
        return getMainInfo() + getAdditionalInfo();
    }
};
