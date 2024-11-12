#include "rectangle.h"
#include <iostream>


double Rectangle::getArea()
{
    //width * height
    return width * height;
}

double Rectangle::getCircum()
{
    // 2 * (width + height)
    return 2 * (width + height);
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

Rectangle::~Rectangle()
{

}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getHeight() const
{
    return height;
}

Rectangle::Rectangle() {}
