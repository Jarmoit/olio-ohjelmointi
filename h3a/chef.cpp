#include "chef.h"
#include <iostream>
#include <string>

string Chef::getName() const
{
    return name;
}

void Chef::setName(const string &newName)
{
    name = newName;
}

Chef::~Chef()
{
    std::cout<<"* "+this->getName()+" chef tuhottu\n";
}

Chef::Chef(string chefname)
{
    name=chefname;
    std::cout<<"* "+this->getName()+" chef tehty\n";
}

void Chef::makeSalad()
{
    std::cout<<this->getName()+" makes salad\n";
}

void Chef::makeSoup()
{
    std::cout<<this->getName()+" makes soup\n";
}
