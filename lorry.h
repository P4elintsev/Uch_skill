#pragma once

// #include <src/car.h>
#include "car.h"
#include <string>

using namespace std;

//грузовик
class Lorry : public Cars
{
private:
    //грузоподъемность
    int capacity_;

public:
    //конструктор по умолчанию
    Lorry()
        : Cars()
    {
    }

    //конструктор с параметрами
    Lorry(int cylinder,int power, const string &name, int capacity)
        : Cars(cylinder, power, name), capacity_(capacity)
    {
    }

    // конструктор копирования
    Lorry(const Lorry &new_lorry)
        : Cars(new_lorry.cylinder_, new_lorry.power_, new_lorry.name_),
          capacity_(new_lorry.capacity_)
    {
    }
    // Lorry(const Lorry &new_lorry)
    //     : Cars(new_lorry.cylinder_, new_lorry.power_, new_lorry.name_),
    //             capacity_(new_lorry.capacity_)
    // {
    // }

    //грузоподъемность
    void setCapacity(int capacity);

    //получить грузоподъемности 
    int getCapacity() const;

    //деструктор
    ~Lorry()
    {
    }
};