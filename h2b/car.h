#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;



public:
    Car();
    string getBrand() const;
    void setBrand(const string &newBrand);
    string getModel() const;
    void setModel(const string &newModel);
    int getYearModel() const;
    void setYearModel(int newYearModel);
    Car(string a, string b, int c);
    void printData();
};

#endif // CAR_H
