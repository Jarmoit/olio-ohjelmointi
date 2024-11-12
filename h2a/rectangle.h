#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle();

    double getArea(); // width * height.
    double getCircum(); // 2 * (width + height)
    void setWidth(double newWidth);
    double getWidth() const;
    void setHeight(double newHeight);
    double getHeight() const;
     //void setYearModel(int newYearModel); KOPIOI

    ~Rectangle();

};

#endif // RECTANGLE_H
