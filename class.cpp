#include <iostream>
using namespace std;

class Room {
public:
  float length;
  float breadth;
  float height;

  float caliculateArea(){
    return length * breadth;
  }
  float caliculateVolume(){
    return length * breadth * height;
  }
};

int main(){
  Room room1, room2;
  room1.length = 5.2;
  room1.breadth = 30.5;
  room1.height = 19.2;

  cout <<"Area of room 1 "<<room1.caliculateArea() <<endl;
  cout <<"volume of room 1"<<room1.caliculateVolume()<<endl;

  room2.length = 2;
  room2.breadth = 3;
  room2.height = 5;

  cout <<"Area of room2 "<<room2.caliculateArea()<<endl;
  cout <<"volume of room2 "<<room2.caliculateVolume()<<endl;
}
