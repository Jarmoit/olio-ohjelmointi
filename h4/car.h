#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"

#include <string>
using namespace std;

class Car
{
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;

public:
    Car();
    Car(string,string);
    void setEngine();
    void setWheels();
    void printDetails();
    ~Car();

    Engine getObjEngine() const;
    void setObjEngine(const Engine &newObjEngine);
    Wheel getObjWheel1() const;
    void setObjWheel1(const Wheel &newObjWheel1);
    Wheel getObjWheel2() const;
    void setObjWheel2(const Wheel &newObjWheel2);
    Wheel getObjWheel3() const;
    void setObjWheel3(const Wheel &newObjWheel3);
    Wheel getObjWheel4() const;
    void setObjWheel4(const Wheel &newObjWheel4);
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
};

#endif // CAR_H
