#include <iostream>
using namespace std;


class Cube{

public:
  void cubeVolume(int side){
    cout<<(side*side*side)<<endl;
  }
  void cubeVolume(double side, double side1){
    cout<<(side*side1*side)<<endl;
  }
};
int main(){
  Cube c1;
  c1.cubeVolume(5);
  c1.cubeVolume(2.2, 2.2);
}
