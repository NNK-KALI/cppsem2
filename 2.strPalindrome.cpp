/*write a program to check given string is palindrome or not uisng a private
member function*/
#include <iostream>

using namespace std;

class Palindrome{
  string str;
public:
  void checker(string str){
    int len = str.length() - 1;

    int i = 0;
    while(len > i){
      if(str[i++] == str[len--]){//malayalal
        cout <<"It is palindrome"<<endl;
        return ;
      }else{
        cout <<"It is not Palindrome"<<endl;
        return ;
      }
    }
  }
};

int main(){
  Palindrome p;
  p.checker("malayalam");
}           // 012345678
