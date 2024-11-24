#include "car.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<Car> carList; //vektori
    //car-luokan oliot
    Car objectCar0("Fujitsu","Menox",2021);
    Car objectCar1("Toyota","Hilux",1994);
    Car objectCar2("Hoda","Kalix",2015);
    //lisätään listaan
    carList.push_back(objectCar0);
    carList.push_back(objectCar1);
    carList.push_back(objectCar2);

    //printataan ekan auto tiedot    car.printData();
    for (int i=0;i<carList.size();i++)
    {
        carList[i].printData();
   }

    return 0;
}
//----------Ignore------------
//for (Car& car : carList) {
//    car.printData();
//}
