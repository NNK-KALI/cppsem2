#include <iostream>
using namespace std;

int main(){
  int lst[] = {26,1,5,9 ,7 ,3};
  int size = sizeof(lst)/sizeof(lst[0]) - 1;

  for(int i=0; i <= size; i++){
    for(int j=0; j<=size; j++){
      if (lst[j]>lst[j+1]){
        int temp;
        temp = lst[j+1];
        lst[j+1] = lst[j];
        lst[j] = temp;
      }
    }
  }

  cout <<"Assending order"<<endl;
  for(int i=0; i<=size; i++){
    cout <<lst[i]<<" ";
  }cout <<endl;

  cout <<"Desending order"<<endl;
  for(int i=size; i>=0; i--){
    cout <<lst[i]<<" ";
  }cout <<endl;

}
