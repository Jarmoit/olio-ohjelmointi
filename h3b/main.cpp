#include <iostream>
#include "animal.h"
#include "dog.h"
using namespace std;

int main()
{
    //***tehtävän tarkoitus saattanee olla tämä, mutta Animal-classin voi
    //*** muodostaa poistamalla /* ja */ rivi 14,18
    Animal *objDog = new Dog; //pinomuistiin Dog-luokka, joka perii Animalin
    objDog->CallOut();


    /*Animal *objAnimal = new Animal;
    objAnimal->CallOut();
    delete objAnimal;
    objAnimal=nullptr;
    */

    delete objDog;
    objDog=nullptr;
    return 0;
}
