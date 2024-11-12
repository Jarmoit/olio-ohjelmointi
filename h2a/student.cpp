#include "student.h"

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

int Student::getStudentNumber() const
{
    return studentNumber;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

double Student::getAverage() const
{
    return average;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}

Student::~Student()
{

}

Student::Student() {}

Student::Student(string n, int s, double a)
{
    name = n;
    studentNumber = s;
    average = a;
    //ota selvää miksi tämä on tässä näin
}
