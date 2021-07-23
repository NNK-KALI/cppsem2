//wap to find area of different shape by function overloading
#include <iostream>
using namespace std;

int Area(double);
int Area(double, double);
void Area();
int Area(double num){
  //This function is to find the area of square
  return num * num;
}

int Area(double length, double breadth){
  //This function is to find the area of rectangle
  return length * breadth;
}

void Area(){
  //This function is to find the area of triangle
  double base=3, height=6;
  cout<<"Area of triangle "<< 0.5 * base * height;
}


int main(){
  cout <<"Area of square "<<Area(5)<<endl;
  cout <<"Area of rectangle "<<Area(2, 4)<<endl;
  Area();
}
