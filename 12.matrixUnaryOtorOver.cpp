/* write a program to find transpose of given matrix of mxn size using unary
  operator overloading */

#include <iostream>
using namespace std;
class Matrix
{
  int rows, cols;
  int mat[10][10];
public:
  void fetchRowsAndCols(){
    cout <<"Enter rows and cols of matrix seperated by space "<<endl;
    cin >>rows >>cols;
  }

  void getdata(){
    for(int i=0; i<rows; i++){
      for(int j=0; j<cols; j++){
        cout <<"a["<<i<<"]["<<j<<"] ";
        cin >>mat[i][j];
      }
    }
  }

  void original(){
    cout <<endl;
    for(int i=0; i<rows; i++){
      for(int j=0; j<cols; j++){
        cout <<mat[i][j]<<" ";
      }cout <<endl;
    }
  }


  void operator --(){
    cout <<endl;
    cout <<"transpose of matrix" <<endl;
    for(int i=0; i<cols; i++ ){
      for(int j=0; j<rows; j++){
        cout<<mat[j][i]<< " ";
      }cout<<endl;
    }
  }
};

int main(){
  Matrix m;
  m.fetchRowsAndCols();
  m.getdata();
  m.original();
  --m;
}
