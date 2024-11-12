#include "car.h"

string car::getBrand() const
{
    return brand;
}

void car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string car::getModel() const
{
    return model;
}

void car::setModel(const string &newModel)
{
    model = newModel;
}

int car::getYearModel() const
{
    return yearModel;
}

void car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void car::printData(){
    cout<<"Auton merkki: "<<brand<<endl;
    cout<<"Auton malli: "<<model<<endl;
    cout<<"Auton vuosi: "<<yearModel<<endl;
}

car::car() {}
