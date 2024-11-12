#include <iostream>
<<<<<<< HEAD
=======
#include "laskin.h"
>>>>>>> cd2efa66070c1b82108c9709bff51167307267b0

using namespace std;

int main()
{
<<<<<<< HEAD
    cout << "Hello World!" << endl;
=======
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
>>>>>>> cd2efa66070c1b82108c9709bff51167307267b0
    return 0;
}
