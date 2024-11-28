#include "car.h"
using namespace std;

Engine Car::getObjEngine() const
{
    return objEngine;
}

void Car::setObjEngine(const Engine &newObjEngine)
{
    objEngine = newObjEngine;
}

Wheel Car::getObjWheel1() const
{
    return objWheel1;
}

void Car::setObjWheel1(const Wheel &newObjWheel1)
{
    objWheel1 = newObjWheel1;
}

Wheel Car::getObjWheel2() const
{
    return objWheel2;
}

void Car::setObjWheel2(const Wheel &newObjWheel2)
{
    objWheel2 = newObjWheel2;
}

Wheel Car::getObjWheel3() const
{
    return objWheel3;
}

void Car::setObjWheel3(const Wheel &newObjWheel3)
{
    objWheel3 = newObjWheel3;
}

Wheel Car::getObjWheel4() const
{
    return objWheel4;
}

void Car::setObjWheel4(const Wheel &newObjWheel4)
{
    objWheel4 = newObjWheel4;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

Car::Car() {}

Car::Car(string x, string y)
{
    model=x;
    brand=y;
}

void Car::setEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels()
{
    objWheel1.setSize(17);
    objWheel2.setSize(17);
    objWheel3.setSize(17);
    objWheel4.setSize(17);
    objWheel1.setType("kesarengas");
    objWheel2.setType("kesarengas");
    objWheel3.setType("kesarengas");
    objWheel4.setType("kesarengas");

}

void Car::printDetails()
{
    cout<<"Auto : "<<getModel()<<" "<<getBrand()<<endl;
    cout<<"Moottori: "<<objEngine.getHorsepower()<<" hp, "<<objEngine.getDisplacement()<<" L"<<endl;
    cout<<"Rengas 1:"<<objWheel1.getSize()<<" tuumaa, "<<objWheel1.getType()<<endl;
    cout<<"Rengas 2:"<<objWheel2.getSize()<<" tuumaa, "<<objWheel2.getType()<<endl;
    cout<<"Rengas 3:"<<objWheel3.getSize()<<" tuumaa, "<<objWheel3.getType()<<endl;
    cout<<"Rengas 4:"<<objWheel4.getSize()<<" tuumaa, "<<objWheel4.getType()<<endl;

}

Car::~Car()
{

}
