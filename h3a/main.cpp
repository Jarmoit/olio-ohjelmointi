#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    //main-class
    Chef objChef("Gordon Ramsay"); //opettele tekniikka
    ItalianChef objItaly("Anthony Bourdain");
    objChef.makeSalad();
    objChef.makeSoup();

    //italianchef subclass
    objItaly.makePasta();
    cout<<"name of the Italian Chef is "<<objItaly.getName()<<endl;

    return 0;
}

