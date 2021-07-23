#include <iostream>
using namespace std;


int main(){
  int m, n, value;
  cout <<"ENter no of rows and coloumns "<<endl;
  cin >>m>>n;
  int x[m][n];
  for(int i=1; i<=m; i++){
    for(int j=1; j<=n; j++){
      cout << "a["<<i<<"]["<<j<<"]"<<endl;
      cin >> value;
      x[i][j] = value;
    }
  }
  cout <<endl;
  cout <<endl;

  for(int i=1; i<=m; i++){
    for(int j=1; j<=n; j++){
      cout <<x[i][j]<<" ";
    }cout <<endl;
  }
}
