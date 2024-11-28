#include <iostream>
#include "engine.h"
#include "wheel.h"
#include "car.h"


using namespace std;

int main()
{
    Car objCar("Corolla", "Toyota");
    objCar.setEngine();
    objCar.setWheels();
    objCar.printDetails();
    return 0;
}
