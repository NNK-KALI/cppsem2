#include <iostream>
using namespace std;


int main(){
  int m=3, n=3, num;
  int mat[m][n];
  for(int i=0; i<m; i++ ){
    for(int j=0; j<n; j++){
      cin>>num;
      mat[i][j]=num;

    }
  }
  cout<<"original matrix"<<endl;
  for(int i=0; i<m; i++ ){
    for(int j=0; j<n; j++){
      cout<<mat[i][j]<< " ";
    }cout<<endl;
  }
  cout<<endl;
  cout <<"inverse matrix"<<endl;
  for(int i=0; i<m; i++ ){
    for(int j=0; j<n; j++){
      cout<<mat[j][i]<< " ";
    }cout<<endl;
  }
}
