#include "exampleclass.h"

ExampleClass::ExampleClass(QObject *parent)
    : QObject{parent}
{

    qDebug()<<"start";
    QObject::connect(this, SIGNAL(readyToSay()), this, SLOT(sayHelloSlot()));
    qDebug()<<"End";

}

void ExampleClass::StartToWait()
{
    QThread::msleep(1000);
    emit readyToSay();
}

void ExampleClass::sayHelloSlot()
{
    qDebug()<<"Terve";
}
