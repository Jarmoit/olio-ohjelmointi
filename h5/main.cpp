#include <iostream>
#include "aggregationa.h"
#include "assosiationa.h"

using namespace std;

int main()
{
    //tehtävä 1-5.#############
    int a = 5;
    int b = 10;

    cout<<"a:n arvo on: "<<a<<" ja osoite on: "<<&a<<endl;
    cout<<"b:n arvo on: "<<b<<" ja osoite on: "<<&b<<endl;

    //pointteri tehty, poitteri sisältää x ja heksaa, joten normi int ei toimi. Pointterin arvo
    //haetaan antamalla *variable. Pelkällä varbiable tulee osoitettu muistipaikka. &:lla tulee
    //pointterin muistipaikka
    // int* <- pointteriarvo joka tarvii &a, Var = pointterin nimi, &a = (toisen variabeelin muistipaikka
    //käytössä:
    //a=osoitettu muistiosoite, *a= muistiosoitteen kantama tieto, var = muistipaikka


    int* myPointer;
    //pointteri viittaa a:n muistipaikkaan
    myPointer = &a;

    cout<<"Pointterin osoittama osoite on: "<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<<*myPointer<<endl;


    //tehtävä 6. ##############
    myPointer = &b;
    cout<<"Pointterin osoittama osoite on: "<<myPointer<<endl;
    cout<<"Pointterin osoittaman muistipaikan arvo on: "<<*myPointer<<endl;
    //tehtävä 8. #######
    int* refA = &a;
    cout<<"refA osoittaa osoitteeseen on: "<<refA<<endl;
    cout<<"refA:n osoittaman muistipaikan arvo on: "<<*refA<<endl;
    //tehtävä 10. #######
    refA = &b;
    cout<<"refA osoittaa nyt: "<<refA<<endl;
    cout<<"refA:n osoittaman muistipaikan arvo nyt: "<<*refA<<endl;

    //------vaihe 2: assosiaatio. A kopioi B:n, mutta elää omaa elämäänsä.
    cout<<"***********\n";
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    //------vaihe 3: aggregaatio. A referessoi B:tä, mutta voi muokata B:tä, mutta B on itsenäinen
    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info"); //aggre A muokkaa objB:tä
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;



    return 0;
}
