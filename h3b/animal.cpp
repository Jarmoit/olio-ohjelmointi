#include <iostream>
#include "animal.h"
using namespace std;

Animal::Animal() {}

Animal::~Animal()
{
    cout<<"Animal class rikottu"<<endl;
}

void Animal::CallOut()
{
    cout<<"eläin ääntelee"<<endl;
}
