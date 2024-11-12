#include "circleType.h"

class cylinderType : public circleType
{
public:
    cylinderType(double r = 0, double h = 0);
    void setHeight(double h);
    double volume();
    double surfaceArea();
    
private:
    double height;
};