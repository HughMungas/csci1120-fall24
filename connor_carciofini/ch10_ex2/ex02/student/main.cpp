#include <iostream>
#include "productType.h"

using namespace std;

int main() {
    productType newProduct("SteelyDan III", "sd3", "Yokohama", 10, 99.99, .20);

    newProduct.setPrice(99.29);

    cout << newProduct.getDiscount() << endl;

    newProduct.print();

    return 0;
}
