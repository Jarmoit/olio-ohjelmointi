#include "car.h"
#include <iostream>

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    std::cout<<"Auto : "<<this->brand<<", malli: "<<this->model<<", vuosi: "<<this->yearModel<<std::endl;
}

Car::Car(string a, string b, int c)
{
    brand = a;
    model = b;
    yearModel = c;
}

Car::Car() {}
