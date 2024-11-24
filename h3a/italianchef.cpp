#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(string chefName) : Chef(chefName) //opettele tekniikka
{
    this->name=chefName;
}

string ItalianChef::getName()
{

    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Italian Chef "<<name<<" makes pasta"<<endl;
}

//ItalianChef::~ItalianChef()
//{
//     cout<<"Italian Chef "<<name<<" destruktori"<<endl;
//}

