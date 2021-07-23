#include <iostream>
using namespace std;


class  Student{
public:
  int regNo, marks[3];
  float average;
  void readData(){
    cout <<"Enter Reg number "<<endl;
    cin >>regNo;
    cout <<"Enter 3 subject marks "<<endl;
    for(int i=0; i<3; i++){
      cin >>marks[i];
    }
  }
  void caliculateData(){
    float total;
    for(int i=0; i<3; i++){
      total += marks[i];
    }average = total/3;
  }
  void displayData(){
    cout <<"Registration number"<<regNo<<endl;
    for(int i=0; i<3; i++){
      cout <<"Subject"<<i+1<<" Marks "<<marks[i]<<endl;

    }cout <<"average is "<<average<<endl;
  }
};
int main(){

  for(int i=0; i<1; i++){
    Student j;
    j.readData();
    j.caliculateData();
    j.displayData();
    cout <<endl;
  }
}
