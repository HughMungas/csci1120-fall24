#include <iostream>

#include <cassert>
#include "rectangleType.h"
#include "boxType.h"
  
using namespace std;

void boxType::setDimension(double l, double w, double h)
{
    rectangleType::setDimension(l, w);

    if (h >= 0)
        height = h;
    else
        height = 0;
}

double boxType::getHeight() const
{
    return height;
}

double boxType::area() const
{
    return  2 * (getLength() * getWidth()
               + getLength() * height 
               + getWidth() * height);
}

double boxType::volume() const
{
    return rectangleType::area() * height;
}

boxType::boxType()	
{
    height = 0.0;
}

boxType::boxType(double l, double w, double h)
         : rectangleType(l, w)
{ 
    if (h >= 0)
        height = h;
    else
        height = 0;
}

// boxType boxType::operator + (const boxType & box) const
// {
//     boxType tempBox;

//     tempBox.length = length + box.length;
//     tempBox.width = width + box.width;
//     tempBox.height = height + box.height;

//     return tempBox;
// }


// boxType boxType::operator - (const boxType & box) const
// {
//     boxType tempBox;

//     assert(length >= box.length && width >= box.width && height >= box.height);

//     tempBox.length = length + box.length;
//     tempBox.width = width + box.width;
//     tempBox.height = height + box.height;

//     return tempBox;
// }

// boxType boxType::operator * (const boxType & box) const
// {
//     boxType tempBox;

//     tempBox.length = length * box.length;
//     tempBox.width = width * box.width;
//     tempBox.height = height * box.height;

//     return tempBox;
// }

// boxType boxType::operator ++ ()
// {
//     ++length;
//     ++width;
//     ++height;

//     return *this;   //return the incremented value of the object
// }

// boxType boxType::operator ++ (int u)
// {
//     boxType temp = *this;  //use this pointer to copy 
//                                  //the value of the object   
//     length++;
//     width++;
//     height++;

//     return temp;    //return the old value of the object
// }

// boxType boxType::operator--()
// {
//         //Decrement the length and width
//     assert(length >= 1 && width >= 1 && height >= 1);
//     --length;
//     --width;
//     --height;

//     return *this;    //return the incremented value of the object
// }

// boxType boxType::operator -- (int u)
// {
//     boxType temp = *this;  //use this pointer to copy 
//                                  //the value of the object

//         //Decrement the length and width   
//     assert(length >= 1 && width >= 1 && height >= 1);
//     length--;
//     width--;
//     height--;

//     return temp;    //return the old value of the object
// }

// bool boxType::operator == (const boxType& box) const
// {
//     return (volume() == box.volume());
// }

// bool boxType::operator != (const boxType& box) const
// {
//     return (volume() != box.volume());
// }

// bool boxType::operator <= (const boxType& box) const
// {
//     return (volume() <= box.volume());
// }

// bool boxType::operator < (const boxType& box) const
// {
//     return (volume() < box.volume());
// }

// bool boxType::operator >= (const boxType& box) const
// {
//     return (volume() >= box.volume());
// }

// bool boxType::operator > (const boxType& box) const
// {
//     return (volume() > box.volume());
// }

ostream& operator<<(ostream& osObject, 
                      const boxType& box)
{
    osObject << "Length = "  << box.length 
             << "; Width = " << box.width
             << "; Height = " << box.height;

    return osObject;
}

istream& operator>>(istream& isObject, boxType& box)
{
    isObject >> box.length >> box.width >> box.height;

    return isObject;
}