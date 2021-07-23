#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  cout <<"Enter the sides of the trinagle"<<endl;
  cin>>a;
  cin>>b;
  cin>>c;
  if(a+b>c && b+c>a && a+c>b){
    if(a==b && b==c)
    cout<<"Eqilateral Trinangle";
    else if(a==b || b==c || a==c)
    cout<<"Isosceles Triangle";
    else if(a!=b && b!=c)
    cout<<"Scalen triangle";
  }else{
    cout <<"Triangle cannot be formed with that sides ";
  }

}
