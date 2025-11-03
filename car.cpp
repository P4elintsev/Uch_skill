#include <src/car.h>
// #include "car.h"

void Cars::setName(const std::string &name)
{
    name_ = name;
}

const std::string &Cars::getName() const
{
    return name_;
}

void Cars::setCylinder(int cylinder)
{
    cylinder_ = cylinder;
}

int Cars::getCylinder() const
{
    return cylinder_;
}

void Cars::setPower(int power)
{
    power_ = power;
}

int Cars::getPower() const
{
    return power_;
}

std::ostream &operator<<(std::ostream &out, const Cars &cars)
{
    out << "Модель: " << cars.getName() << ", Цилиндры: " << cars.getCylinder() << ", Мощность: " << cars.getPower();
    return out;
}

std::istream &operator>>(std::istream &in, Cars &cars)
{
    std::string name;
    int cylinder, power;

    std::cout << "Введите марку автомобиля: ";
    std::getline(in, name);
    cars.setName(name);

    std::cout << "Введите число цилиндров: ";
    in >> cylinder;
    cars.setCylinder(cylinder);

    std::cout << "Введите мощность двигателя: ";
    in >> power;
    cars.setPower(power);

    return in;
}