#include <iostream>
using namespace std;

class Report
{
  string name;
  double sub1, sub2, sub3, sub4, sub5;
  double avg;
  
public:
  void getStudentInfo(){
    cout <<endl;
    cout <<"Enter Student Name"<<endl;
    cin >>name;
    cout <<"enter 5 sub marks"<<endl;
    cin >>sub1>>sub2>>sub3>>sub4>>sub5;
  }
  void caliculateGrade(){
    avg = (sub1+sub2+sub3+sub4+sub5)/5;
  }
  void displayGrade(){
    cout <<endl;
    cout <<name<<" grade "<<endl;
    if(avg >= 80){
      cout <<"Excellent"<<endl;
    }else if(avg >= 70){
      cout <<"Good"<<endl;
    }else if(avg >= 60){
      cout <<"Fair"<<endl;
    }else if(avg >= 50){
      cout <<"Average"<<endl;
    }else if(avg < 50){
      cout <<"Fail"<<endl;
    }
  }
};
int main()
{
  for(int i=0; i<5; i++){
    Report student;
    student.getStudentInfo();
    student.caliculateGrade();
    student.displayGrade();
  }

}
