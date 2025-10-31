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