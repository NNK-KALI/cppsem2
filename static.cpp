#include <iostream>
using namespace std;

class Student
{
public:
  static int num;

  Student(){
    num++;
  }
  void display(){
    cout <<num<<endl;
  }
};

int Student::num = 0;
int main(){
  Student s1;
  s1.display();
  Student s2;
  s2.display();

}
