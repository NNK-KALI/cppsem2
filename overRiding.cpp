//override in inheritance - is an example of runtime polymorphism
#include <iostream>
using namespace std;

class A
{
int i;
public:
A()
{
        i=10;
}

void display()
{
        cout<<"\n The value of i is: "<<i;
}
};

class B : public A
{
int j;

public:
B()
{
        j=40;
}
void display()
{
        A::display();//calling the base class display funtion is done at runtime or at the time of execution
        cout<<"\n The value of j is: "<<j;
}
};

int main()
{
        B derived;
        derived.display();
}
