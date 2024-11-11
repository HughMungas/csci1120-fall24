#include <string>
#include <iostream>

using namespace std;

class productType
{
public:
    productType();
    productType(int q, double p, double d)
    {
        quantitiesInStock = q;
        price = p;
        discount = d;
    }
    productType(string pn, int q, double p, double d)
    {
        productName = pn;
        quantitiesInStock = q;
        price = p;
        discount = d;
    }
    productType(string pn, string i, string m, int q, double p, double d)
    {
        productName = pn;
        id = i;
        manufacturer = m;
        quantitiesInStock = q;
        price = p;
        discount = d;
    }

    void set(string pn, string i, string m, int q, double p, double d) {
        productName = pn;
        id = i;
        manufacturer = m;
        quantitiesInStock = q;
        price = p;
        discount = d;
    };
    void print() const {
        cout << "Product Name: " << productName << endl;
        cout << "Product Price: $" << price << endl;
    };

    void setQuantitiesInStock(int x) {
        quantitiesInStock = x;
    }
    void updateQuantitiesInStock(int x) {
        quantitiesInStock = x;
    };
    int getQuantitiesInStock() const {
        return quantitiesInStock;
    };

    void setPrice(double x) {
        price = x;
    }
    double getPrice() const {
        return price;
    }
    void setDiscount(double d) {
        discount = d;
    }
    double getDiscount() const {
        return discount;
    }

private:
    string productName;
    string id;
    string manufacturer;
    int quantitiesInStock;
    double price;
    double discount;
};
