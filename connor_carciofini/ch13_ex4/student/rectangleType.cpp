#include <iostream>
#include <cassert>
 
#include "rectangleType.h"
 
using namespace std;

void rectangleType::setDimension(double l, double w)
{
    if (l >= 0)
        length = l;
    else
        length = 0;

    if (w >= 0)
        width = w;
    else
        width = 0;
}

double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getWidth()const
{
    return width;
}

double rectangleType::area() const
{
    return length * width;
}

double rectangleType::perimeter() const
{
    return 2 * (length + width);
}

rectangleType::rectangleType(double l, double w)
{
    setDimension(l, w);
}

rectangleType::rectangleType()
{
    length = 0;
    width = 0;
}

rectangleType rectangleType::operator++()
{
        //increment the length and width
    ++length;
    ++width;

    return *this;   //return the incremented value of the object
}

rectangleType rectangleType::operator++(int u)
{
    rectangleType temp = *this;  //use this pointer to copy 
                                 //the value of the object
        //increment the length and width   
    length++;
    width++;

    return temp;    //return the old value of the object
}

rectangleType rectangleType::operator--()
{
        //Decrement the length and width
    assert(length != 0 && width != 0);
    --length;
    --width;

    return *this;    //return the incremented value of the object
}

rectangleType rectangleType::operator--(int u)
{
    rectangleType temp = *this;  //use this pointer to copy 
                                 //the value of the object

        //Decrement the length and width   
    assert(length != 0 && width != 0);
    length--;
    width--;

    return temp;    //return the old value of the object
}

rectangleType rectangleType::operator+ 
                          (const rectangleType& rectangle) const
{
    rectangleType tempRect;

    tempRect.length = length + rectangle.length;
    tempRect.width = width + rectangle.width;

    return tempRect;
}

rectangleType rectangleType::operator- 
                          (const rectangleType& rectangle) const
{
    rectangleType tempRect;

    assert(length >= rectangle.length &&
           width >= rectangle.width);

    tempRect.length = length - rectangle.length;
    tempRect.width = width - rectangle.width;

    return tempRect;
}

rectangleType rectangleType::operator*(const rectangleType& rectangle) const
{
    rectangleType tempRect;

    tempRect.length = length * rectangle.length;
    tempRect.width = width * rectangle.width;

    return tempRect;
}

bool rectangleType::operator== 
                      (const rectangleType& rectangle) const
{
    return (area() == rectangle.area());
}

bool rectangleType::operator!= 
                       (const rectangleType& rectangle) const
{
    return (area() != rectangle.area());
}

bool rectangleType::operator<= 
                       (const rectangleType& rectangle) const
{
    return (area() <= rectangle.area());
}

bool rectangleType::operator< 
                       (const rectangleType& rectangle) const
{
    return (area() < rectangle.area());
}

bool rectangleType::operator>= 
                       (const rectangleType& rectangle) const
{
    return (area() >= rectangle.area());
}

bool rectangleType::operator>
                       (const rectangleType& rectangle) const
{
    return (area() > rectangle.area());
}

ostream& operator<<(ostream& osObject, 
                      const rectangleType& rectangle)
{
    osObject << "Length = "  << rectangle.length 
             << "; Width = " << rectangle.width;

    return osObject;
}

istream& operator>>(istream& isObject, rectangleType& rectangle)
{
    isObject >> rectangle.length >> rectangle.width;

    return isObject;
}