#include <iostream>
using namespace std;

int main(){
  double a, b, c, d;

  cout <<"assuming expression in the form of ax^2+bx+c=0"<<endl;
  cout <<"Enter a ";
  cin >>a;
  cout <<"Enter b ";
  cin >>b;
  cout <<"Enter c ";
  cin >>c;
  d = (b*b) - (4*a*c);
  cout <<endl;
  if(d>0){
    cout <<"Roots are real and unequal"<<endl;

  }else if(d<0){
    cout <<"Roots are imaginary and unequal"<<endl;

  }else if(d==0){
    cout <<"Roots are real and equal"<<endl;

  }


}
