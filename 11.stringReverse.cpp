/* write a program to reverse of a string using operators */

#include <iostream>
using namespace std;


int main(){
  string str1 = "yoot";
  int len = str1.length();

  int n = len-1;

  for(int i = 0; i<(len/2); i++){
    swap(str1[i],str1[n]);
    n = n-1;
  }
  cout <<str1<<endl;

}
