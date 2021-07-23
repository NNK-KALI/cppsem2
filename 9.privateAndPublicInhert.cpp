/* write a program to demonstrate single inheritance distinguishing public
and private derivation */

#include <iostream>
using namespace std;
 class Base
 {
	 int b = 20;
 public:
	 int a = 10;

	 int newFun(){
		 return b;
	 }

 };

 class Derived : public Base
 {
 public:
	 void printData(){
		 cout <<"public datamembers "<<a<<endl;
     /*to acess the private datamembers we are using member functions*/
		 cout <<"private datamembers "<<newFun()<<endl;
	 }
 };

 int main(){
	 Derived d1;
	 d1.printData();
 }
