#include <iostream>
using namespace std;

int main(){
  int m;
  cout <<"enter size of array "<<endl;
  cin >>m;
  int lst[m];
  cout <<"Enter numbers in arrary "<<endl;
  for(int i=0; i<=m-1; i++){
    int temp;
    cin >>temp;
    lst[i] = temp;
  }

  int size = sizeof(lst)/sizeof(lst[0]);
  cout <<size<<endl;

  for(int i=0; i <= size; i++){
    for(int j=0; j<=size; j++){
      if (lst[j]<lst[j+1]){
        int temp;
        temp = lst[j];
        lst[j] = lst[j+1];
        lst[j+1] = temp;
      }
    }
  }

  cout <<endl;
  cout <<"Desending order"<<endl;
  for(int i=0; i<=size; i++){
    cout <<lst[i]<<" ";
  }
}
