/* write a program for finding area of different geometric shapes (circle,
rectangle, cube) using function overloading */

#include <iostream>
#include <cmath>

using namespace std;

int area(int a){
  return 6*(a*a);
}
void area(double r){
  cout <<"The area of circle is "<<M_PI*(r*r)<<endl;
}
void area(double l, double b){
  cout <<"The area of rectangle is "<<l*b<<endl;
}


int main(){
  cout <<"The area of cube is "<<area(5)<<endl;
  area(3.0);
  area(1.2, 2.3);
}
