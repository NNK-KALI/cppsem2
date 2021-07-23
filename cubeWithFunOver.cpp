#include <iostream>
using namespace std;

void cube(){
  int s;
  s = 5;
  cout <<"The volume of cube with side "<<s<<" is "<<s*s*s<<endl;
}
int cube(double side){
  return side*side*side;
}
int main(){
  double side, volume;
  cout <<"Enter the side of cube "<<endl;
  cin >>side;
  volume = cube(side);
  cout <<"the volume of cube with "<<side<<" is "<<volume<<endl;
  cout <<endl;
  cube();

}
