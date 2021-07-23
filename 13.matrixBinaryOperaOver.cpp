//wriite a program to add two matrices of m*n size using binary operator overloading

#include <iostream>
using namespace std;

int rows, cols;
int count=1;

void fetchRowsAndCols(){
  cout <<"Enter rows and cols of matrix seperated by space "<<endl;
  cin >>rows >>cols;
}


class Matrix1
{
public:

  int mat[10][10];
  int res[10][10];
  void getElements(){
    cout <<endl;
    cout <<"Enter matrix "<<count<<endl;
    for(int i=0; i<rows; i++){
      for(int j=0; j<cols; j++){
        cout <<"a["<<i<<"] ["<<j<<"] ";
        cin >>mat[i][j];
      }
    }count++;
  }

  void operator +(Matrix1 obj){
    for(int i=0; i<rows; i++){
      for(int j=0; j<cols; j++){
        res[i][j] = obj.mat[i][j] + mat[i][j];
      }
    }
  }

  void display(){
    cout <<endl;
    cout <<"Resultant Matrix"<<endl;
    for(int i=0; i<rows; i++){
      for(int j=0; j<cols; j++){
        cout <<res[i][j]<<" ";
      }cout <<endl;
    }
  }
};



int main(){
  fetchRowsAndCols();
  Matrix1 obj1;
  Matrix1 obj2;
  obj1.getElements();
  obj2.getElements();
  obj2+obj1;
  obj2.display();



}
