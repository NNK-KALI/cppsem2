#include <iostream>
using namespace std;


class Rectangle{

  int l, b;
  int area;
public:
  void getInput();
  void display()
  {
    area = l* b;
    cout<<"the area of rectangle is "<<area<<endl;
  }

};

void Rectangle::getInput(){
  cout<<"Enter the length and breadth of rectangle "<<endl;
  cin>>l>>b;
}

int main()
{
  Rectangle r1, r2;
  r1.getInput();
  r1.display();

  r2.getInput();
  r2.display();

}
