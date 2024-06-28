Демонстационный код реализуемый на основе шаблонного паттерна проектирования, посредствам языка C++ с использованием Windows форм для GUI.

# Шаблонный паттерн в данном примере

Абстрактным классом в моем примере является класс Transport реализующий скелет класса для описания т.с.

```cpp
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
```

Конкретные классы - Motorcycle и Car
```cpp
class Motorcycle : public Transport {
public:
    Motorcycle(std::string man, std::string mod, int y, double pwr, double price, std::string img)
        : Transport(man, mod, "Мотоцикл", y, pwr, price, img) {}

    std::string getImage() const override {
        return this->image;
    }

    std::string getInfo() const override {
        std::ostringstream oss;
        oss << Transport::getInfo();
        oss << "------------------------------------------------\r\n";
        oss << "Тип привода: Цепной\r\n";
        oss << "Рабочий объем: 847 см^3\r\n";
        return oss.str();
    }
};

class Car : public Transport {
public:
    Car(std::string man, std::string mod, int y, double pwr, double price, std::string img)
        : Transport(man, mod, "Легковой автомобиль", y, pwr, price, img) {}

    std::string getImage() const override {
        return this->image;
    }

    std::string getInfo() const override {
        std::ostringstream oss;
        oss << Transport::getInfo();
        oss << "------------------------------------------------\r\n";
        oss << "Кол-во мест: 5 мест\r\n";
        oss << "Объем багажника: 524 л\r\n";
        return oss.str();
    }
};
```
Использование конкретного класса в обработчике для кнопки

```cpp
private: System::Void btnShowMotorcycle_Click(System::Object^ sender, System::EventArgs^ e) {
    this->txtOutput->Clear();
    Transport* moto = new Motorcycle("Yamaha", "MT-09", 2022, 117, 1149, "img/moto.bmp"); ///
    this->txtOutput->AppendText(gcnew String(moto->getInfo().c_str())); ///
    Bitmap^ bmp = gcnew Bitmap(220, 200);
    Graphics^ g = Graphics::FromImage(bmp);
    pictureBox->Image = bmp;
    Bitmap^ image;
    System::String^ imageFile = gcnew System::String(moto->getImage().c_str()); ///
    image = gcnew Bitmap(imageFile);
    pictureBox->Image = image;
}
```
# Пример работы приложения

![br3yQFcUJ6](https://github.com/s1kko1337/summer_practicle/assets/145784202/5dda4b5b-6385-433e-b4fa-8ffabaaa3224)
