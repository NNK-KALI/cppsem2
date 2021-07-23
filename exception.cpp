#include <iostream>


int main() {
  try{
    int num1;
    std::cout <<"Enter 1 st number " <<std::endl;
    std::cin >>num1;
    int num2;
    std::cout <<"Enter 2 nd number " <<std::endl;
    std::cin >>num2;
    if (num2 == 0) {
      throw 0;
    }
    std::cout <<num1/num2 <<std::endl;
  }catch(...){
    std::cout << "you cannot divide by " <<std::endl;
  }
}
