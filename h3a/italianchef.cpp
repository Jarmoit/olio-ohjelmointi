#include "italianchef.h"
#include <iostream>
#include "chef.h"


ItalianChef::ItalianChef(string chefname) : Chef(chefname)
{
    this->name = chefname;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    std::cout<<this->getName()+" makes pasta\n";
}
