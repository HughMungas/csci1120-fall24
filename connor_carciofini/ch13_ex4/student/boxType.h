#ifndef boxType_H
#define boxType_H
#include <cassert>

#include "rectangleType.h"

class boxType : public rectangleType
{
  // Overload the stream insertion and extraction operators
  friend ostream &operator<<(ostream &, const boxType &);
  friend istream &operator>>(istream &, boxType &);

public:
  void setDimension(double l, double w, double h);
  // Function to set the length, width, and height
  // of the box.
  // Postcondition: length = l; width = w; height = h;

  double getHeight() const;
  // Function to return the height of the box.
  // Postcondition: The value of height is returned.

  double area() const;
  // Function to return the surface area of the box.
  // Postcondition: The surface area of the box is
  //                 calculated and returned.

  double volume() const;
  // Function to return the volume of the box.
  // Postcondition: The volume of the box is
  //                calculated and returned.

  boxType();
  // Default constructor
  // Postcondition: length = 0; width = 0; height = 0;

  boxType(double l, double w, double h);
  // Constructor with parameters
  // Postcondition: length = l; width = w; height = h;

  // Overload the arithmetic operators
  //  boxType operator + (const boxType &) const;
  friend boxType operator+(const boxType &box1, const boxType &box2)
  {
    boxType tempBox;

    tempBox.length = box1.length + box2.length;
    tempBox.width = box1.width + box2.width;
    tempBox.height = box1.height + box2.height;

    return tempBox;
  };
  friend boxType operator-(const boxType &box1, const boxType &box2)
  {
    boxType tempBox;

    assert(box1.length >= box2.length && box1.width >= box2.width && box1.height >= box2.height);

    tempBox.length = box1.length - box2.length;
    cout << "HERE: " << box1.length - box2.length << endl;
    tempBox.width = box1.width - box2.width;
    tempBox.height = box1.height - box2.height;

    return tempBox;
  };
  friend boxType operator*(const boxType &box1, const boxType &box2)
  {
    boxType tempBox;

    tempBox.length = box1.length * box2.length;
    tempBox.width = box1.width * box2.width;
    tempBox.height = box1.height * box2.height;

    return tempBox;
  };

  // Overload the increment and decrement operators
  friend boxType operator++(const boxType &aBox)
  {
    boxType tempBox;
    tempBox.length = aBox.length + 1;
    tempBox.width = aBox.width + 1;
    tempBox.height = aBox.height + 1;

    return tempBox;
  };
  // return the incremented value of the object
  // pre-increment
  // boxType operator++();
  // boxType operator++(int); // post-increment
  friend boxType operator--(const boxType &aBox)
  {
    assert(aBox.length >= 1 && aBox.width >= 1 && aBox.height >= 1);

    boxType tempBox;

    tempBox.length = aBox.length - 1;
    tempBox.width = aBox.width - 1;
    tempBox.height = aBox.height - 1;

  }; // pre-decrement
  // boxType operator--(int); // post-decrement

  // Overload the relational operators
  friend bool operator==(const boxType &box1, const boxType &box2)
  {
    return (box1.volume() == box2.volume());
  };

  friend bool operator!=(const boxType &box1, const boxType &box2)
  {
    return (box1.volume() != box2.volume());
  };
  friend bool operator<=(const boxType &box1, const boxType &box2)
  {
    return (box1.volume() <= box2.volume());
  };
  friend bool operator<(const boxType &box1, const boxType &box2)
  {
    return (box1.volume() < box2.volume());
  };
  friend bool operator>=(const boxType &box1, const boxType &box2)
  {
    return (box1.volume() >= box2.volume());
  };
  friend bool operator>(const boxType &box1, const boxType &box2)
  {
    return (box1.volume() > box2.volume());
  };

protected:
  double height;
};

#endif