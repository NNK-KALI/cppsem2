#include <iostream>
using namespace std;

class DynamicConstructor{

  int *p, n;
  public:
  DynamicConstructor(int n){
    this->n = n;
    p = new int[n];
  }
  void getData(){
    cout <<"enter the arrays "<<endl;
    for(int i = 0; i<=n-1; i++){
      cin >> p[i];
    }
  }
  void printData(){
    cout <<"the values of array"<<endl;
    for(int i = 0; i <=n-1; i++){
      cout << p[i] << " ";
    }
  }
};
int main(){
  int s;
  	cout <<"Enter the size of the memory you want:\t";
  	cin>>s;

  	DynamicConstructor dc(s);
  	dc.getData();
  	dc.printData();
}
