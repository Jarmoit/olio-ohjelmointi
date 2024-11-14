//#ifndef POISTAMUT_H
//#define POISTAMUT_H
//#include <iostream>
//#include <string>
//using namespace std;
//
//class myClass
//{
//private:
//    int number1;
//    int number2;
//
//protected:
//    void setNumber1(int);
//    void setNumber2(int);
//
//public:
//    int result;
//    myClass();
//    int calculateResult();
//
//
//
//    int getResult() const;
//    void setResult(int newResult);
//    int getNumber2() const;
//    int getNumber1() const;
//};
//inline int myClass::getNumber2() const
//{
//    return number2;
//}
//
//inline int myClass::getNumber1() const
//{
//    return number1;
//}
//
//inline int myClass::getResult() const
//{
//    return result;
//}
//
//inline void myClass::setResult(int newResult)
//{
//    result = newResult;
//}


#ifndef POISTAMUT_H
#define POISTAMUT_H
#include <iostream>
#include <string>
using namespace std;



class Apartment
{
private:
    int numOfTenants;
    int area;

public:
    Apartment(int, int);
    int heatingCost();

    int getNumOfTenants() const;
    void setNumOfTenants(int newNumOfTenants);
    int getArea() const;
    void setArea(int newArea);
};

inline int Apartment::getArea() const
{
    return area;
}

inline void Apartment::setArea(int newArea)
{
    area = newArea;
}

inline int Apartment::getNumOfTenants() const
{
    return numOfTenants;
}

inline void Apartment::setNumOfTenants(int newNumOfTenants)
{
    numOfTenants = newNumOfTenants;
}
//itesetehdyt metodit

inline Apartment::Apartment(int numOfTenants, int area)
{

}
inline int Apartment::heatingCost()
{
    return heatingCost();
}



#endif
