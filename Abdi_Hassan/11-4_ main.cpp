#include <iostream>
#include <iomanip>
#include "cylinderTypeImp.cpp"
using namespace std;

int main() {
    double radius, height, shippingCostPerLiter, paintCostPerSqFt;

    cout << "Enter the radius of the base of the cylinder (in feet): ";
    cin >> radius;
    cout << "Enter the height of the cylinder (in feet): ";
    cin >> height;

    cout << "Enter the shipping cost per liter: ";
    cin >> shippingCostPerLiter;

    cout << "Enter the paint cost per square foot: ";
    cin >> paintCostPerSqFt;

    cylinderType cylinder(radius, height);

    double volumeInCubicFeet = cylinder.getVolume();

    double volumeInLiters = volumeInCubicFeet * 28.32;

    double shippingCost = volumeInLiters * shippingCostPerLiter;

    double surfaceArea = cylinder.getSurfaceArea();

    double paintCost = surfaceArea * paintCostPerSqFt;

    cout << fixed << setprecision(2);

    cout << "Shipping cost: $" << shippingCost << endl;
    cout << "Painting cost: $" << paintCost << endl;

    return 0;
}
