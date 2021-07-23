#include <iostream>

/* write a program to access the student details like name , no, any five subjects.
find the sum and average of the  five subjects */



using namespace std;



int main()
{
    string name;
    int roll_no;
    double sub1, sub2, sub3, sub4, sub5, sum, average;
    cout << "Enter Name: ";
    cin >> name;
    cout << "roll no :";
    cin >> roll_no;
    cout << "enter sub1 marks: ";
    cin >> sub1;
    cout << "enter sub2 marks: ";
    cin >> sub2;
    cout << "enter sub3 marks: ";
    cin >> sub3;
    cout << "enter sub4 marks: ";
    cin >> sub4;
    cout << "enter sub5 marks: ";
    cin >> sub5;
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    cout << "\nname: " << name << endl;
    cout << "Reg No: " << roll_no << endl;
    cout << "Total marks: " << sum << endl;
    average = sum/5;
    cout << "average is :" << average;
    return 0;
}
