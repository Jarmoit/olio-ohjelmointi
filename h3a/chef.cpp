#include "chef.h"
#include <iostream>
using namespace std;

Chef::Chef(string chefName)
{
    name=chefName;
    if (name=="Gordon Ramsay"){
        cout<<"Chef "<<name<<" konstruktori"<<endl;
    }
    else{
        cout<<"ItalianChef "<<name<<" konstruktori"<<endl;
    }
}

void Chef::makeSalad()
{
    cout<<"Chef "<<name<<" makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup"<<endl;
}

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
    if (name=="Gordon Ramsay"){
        cout<<"Chef "<<name<<" destruktori"<<endl;
    }
    else{
        cout<<"ItalianChef "<<name<<" destruktori"<<endl;
    }
}
