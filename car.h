#pragma once

#include <string>

class Cars
{
protected:
    //торговая_марка
    std::string name_;
    //число_цилиндров
    int cylinder_;
    //мощность
    int power_;

private:
    // счетчик обьектов созданных
    static int count_;

public:
    // конструктор без параметров
    Cars()
    {
        ++count_;
    };
    // конструктор с параметрами
    Cars(int cylinder, int power, std::string name)
        : cylinder_(cylinder), power_(power), name_(name)
    {
        ++count_;
    };
    // конструктор копирования
    Cars(const Cars &new_car)
        : cylinder_(new_car.cylinder_), power_(new_car.power_), name_(new_car.name_)
    {
        ++count_;
    };
    // деструктор
    ~Cars()
    {
    };

    //дружественная функция count
    friend int count(const Cars& cars);

    void setName(const std::string &name);

    const std::string &getName() const;

    void setCylinder(int cylinder);

    int getCylinder() const;

    void setPower(int power);

    int getPower() const;
};
inline int Cars::count_ = 0;