#include <iostream>

using namespace std;




int even_odd(int num){
    if(num%2==0){
    cout << "Even";
    }else{
    cout << "Odd";
    }
}

int main(){
    int num1;
    cout << "Enter Number: ";
    cin >> num1;
    even_odd(num1);
    return 0;

}
