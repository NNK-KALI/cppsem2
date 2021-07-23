#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int num;
  double a, b, c, area, s;
  cout <<"choose the triangle u want"<<endl;
  cout <<"1. equilateral triangle"<<endl;
  cout <<"2. isosceles triangle"<<endl;
  cout <<"3. scalene triangle"<<endl;
  cin >>num;
  switch(num){
    case 1: cout <<"Enter any one side of triangle"<<endl;
            cin >>a;
            area = sqrt(3)/4 *(a*a);
            cout <<area;
            break;
    case 2: cout <<"Enter any two sides of triangle"<<endl;
            cin >>a;
            cin >>b;
            area = (b/4)*(sqrt(4*a*a)-(b*b));
            cout <<area;
            break;
    case 3: cout <<"Enter any three sides of triangle"<<endl;
            cin >>a;
            cin >>b;
            cin >>c;
            s = (a+b+c)/2;
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            cout <<area;
            break;


   default: cout << "Invalid choice";
            }
}
