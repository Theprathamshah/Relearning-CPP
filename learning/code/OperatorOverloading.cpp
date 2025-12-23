#include<iostream>
using namespace std;


class Product {
    float price;
    int quantity;
    public:
    Product(float p, int q) : price(p), quantity(q) {}
    Product operator+(const Product &p) {
        return Product(this->price + p.price, this->quantity + p.quantity);
    }
    Product operator++(int quantity) {
        Product temp = *this;
        ++this->quantity;
        return temp;
    }
    int getQuantity() const {
        return quantity;
    }
    void display() {
        cout << "Price: " << price << ", Quantity: " << quantity << endl;
    }
};

int main() {
    Product p1(100.4, 20);
    Product p2(50.2, 10);
    Product p3 = p1 + p2;
    p3.display();
    p1++;
    cout<<"Total Quantity using ++ operator: "<<(p1++).getQuantity()<<endl;
    p1.display();
}