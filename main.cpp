#include <iostream>
#include <src/car.h>
#include <src/lorry.h>


int count(const Cars& cars)
{
    return cars.count_;
}

int main()
{
       Cars vw(
        4,
        199,
        "tiguan");

    std::cout << "cars: " << vw.getName() << " power " << vw.getPower() << " on " << vw.getCylinder() << " cylinders" << std::endl;

    Lorry kamaz(
        6,
        295,
        "KAMAZ",
        25400);

    std::cout << "lorry: " << kamaz.getName() << " power " << kamaz.getPower() << " on " << kamaz.getCylinder() << " cylinders"
              << ", carry " << kamaz.getCapacity() << " kg" << std::endl;
    
    Lorry ural(
        8,
        575,
        "URAL",
        55400);

    std::cout << "lorry: " << ural.getName() << " power " << ural.getPower() << " on " << ural.getCylinder() << " cylinders"
              << ", carry " << ural.getCapacity() << " kg" << std::endl;

    std::cout << "program show " << count(ural) << std::endl;

    return 0;
}