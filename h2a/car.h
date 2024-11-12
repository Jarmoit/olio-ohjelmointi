#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

using namespace std;

class car
{
private:
    string brand;
    string model;
    int yearModel;

public:
    car();
    string getBrand() const;
    void setBrand(const string &newBrand);
    string getModel() const;
    void setModel(const string &newModel);
    int getYearModel() const;
    void setYearModel(int newYearModel);



    void printData();
};

#endif // CAR_H
