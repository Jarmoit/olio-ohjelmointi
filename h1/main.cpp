#include <iostream>
#include "laskin.h"

using namespace std;

int main()
{
    int a,b;

    cout<<"Let's sum two numbers and give their division" << endl;
    cout<<"\nGive First number : ";
    cin>>a;
    cout<<"\nGive Second number : ";
    cin>>b;
    calcSum(a, b);
    calcDiv(a, b);
    int returnsumma = retSum(a, b);
    float returnjako = retDiv(a, b);
    cout<<returnsumma<<endl;
    cout<<returnjako<<endl;
    return 0;
}
