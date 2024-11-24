#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <string>
using namespace std;


class ItalianChef : public Chef // tekniikka
{

public:
    ItalianChef(string chefName);
    string getName();
    void makePasta();
//    ~ItalianChef();
};




#endif // ITALIANCHEF_H

//: public Chef(string chefName) menee muodostimeen
