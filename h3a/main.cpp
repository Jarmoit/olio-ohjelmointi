#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    Chef kokki1("Gordon Ramsy");
    kokki1.getName();
    kokki1.makeSalad();
    kokki1.makeSoup();
    ItalianChef kokki2("Anthony bordane");
    kokki2.makePasta();

    return 0;
}
