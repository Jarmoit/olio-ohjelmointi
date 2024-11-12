#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>

using namespace std;

int main()
{
    //Car class tässä
    car objCar;
    objCar.setBrand("Toyota");
    objCar.setModel("Hilux");
    objCar.setYearModel(1995);
    objCar.printData();
    //rectangle class tässä
    Rectangle *objectRectangle = new Rectangle;
    objectRectangle->setHeight(7);
    objectRectangle->setWidth(11);

    //cout<<objectRectangle->getHeight()<<endl;
    cout<<"Pinta-ala: "<<objectRectangle->getArea()<<endl;
    cout<<"keha: "<<objectRectangle->getCircum()<<endl;

    delete objectRectangle;
    objectRectangle=nullptr;
    //student class tässä
    shared_ptr<Student> student1 = make_shared<Student>("Tapani", 255, 4.9);
    cout<<"nimi: "<<student1->getName()<<endl;
    cout<<"opiskelijanumero: "<<student1->getStudentNumber()<<endl;
    cout<<"keskiarvo: "<<student1->getAverage()<<endl;

    return 0;
}
