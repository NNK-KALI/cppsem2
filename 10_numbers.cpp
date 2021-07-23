/*#include <iostream>
using namespace std;*/

/*

int main(){
  cout << "enter numbers"<<endl;
  int num, num1, num2;

  for(int i=0; i<=4; i++){
    cin>>num;

    if(num>num2){
      num1 = num;
      cout<<"num1 -->"<<num1<<endl;
    }else if(num<num1){
      num2 = num;
      cout<<"num2 -->"<<num2<<endl;
    }

  }cout<<endl;
  cout <<"The greatest number is "<< num1<<endl;
  cout <<"The smallest number is "<< num2<<endl;
}
*/


#include <iostream>
using namespace std;

int main(){
  int i, j, max=0, min=9, n;
  cin>>n;
  cout<<"enter numbers "<<endl;
  for(i=1; i<=n; i++){
    cin>>j;
    if(j>max)
    max=j;
    if(j<min)
    min=j;
  }
  cout <<max<<" "<<min;
}
