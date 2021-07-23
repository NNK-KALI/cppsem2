
#include <iostream>
using namespace std;

class employee {
   public:
    virtual void display() {
        cout << "Base Function" << endl;
    }
};
class D : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;

    // pointer of Base type that points to derived
    Base* b ;
	b = &derived1;

    // calls member function of Derived class
    b->print();
}
