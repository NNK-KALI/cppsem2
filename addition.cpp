#include <iostream>

using namespace std;

int num, num1, num2;
int sum();
int main()
{


    cout << "Enter 1st Number: ";
    cin >> num1;
    cout << "Enter 2nd Number: ";
    cin >> num2;
    sum();
    cout << "Sum of the two NUmbers: " << num;
    return 0;

}

int sum()
{

    num = num1+num2;
    return num;
}
