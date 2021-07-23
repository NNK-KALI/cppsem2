//passing objects as parameters
#include <iostream>
using namespace std;

class passingObject{
  public:
  int a, b;
  public:
  void getdata(){
    cout <<"enter the values a and b "<<endl;
    cin >>a>>b;
  }
  void putdata(){
    cout <<"The considered two values are "<<a<<" "<<b<<endl;
  }
  passingObject add(passingObject obj1){
    passingObject obj3;
    obj3.a = a + obj1.a;
    obj3.b = b + obj1.b;
    return obj3;
  }
};

int main(){
  passingObject obj, obj3, obj1;

  obj.getdata();
  obj.putdata();

  obj1.getdata();
  obj1.putdata();

  obj3 = obj1.add(obj);
  cout <<endl;
  cout <<"sum of a and b of diff objects is "<<obj3.a<<" "<<obj3.b<<endl;
}
