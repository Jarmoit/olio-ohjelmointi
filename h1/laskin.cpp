#include <iostream>
#include "laskin.h"

void calcSum(int a, int b)
{
    std::cout<<"\nsum is : "<<a+b<<std::endl;

}

void calcDiv(float a, float b)
{
    if (a==0){
        std::cout<<"\ndivident cannot be 0!"<<std::endl;
    }
    else{
        std::cout<<"\ndivision is : "<< a / b<<std::endl;
    }
}

int retSum(int a, int b)
{
    return a + b;
}

float retDiv(float a, float b)
{
    if (a == 0){
        std::cout<<"\divident cannot be 0!"<<std::endl;
        return 0;
    }
    else{
        return a / b;
    }
}
