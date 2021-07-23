#include <iostream>
using namespace std;

int sum(int, int);
void sum();
float sum(float, float, float);


int sum(int a, int b){
return a+b;
}

void sum(){
  int i, j;
  i = 10, j= 20;
  cout <<"the sum value is: " <<i+j<<endl;
}

float sum(float a, float b, float c){
  return (a+b+c);
}

int main()
{
  int a, b;
  cout <<"enter any two numbers"<<endl;
  cin>>a>>b;
  cout <<sum(a, b);
  sum();
  cout <<sum(10.2, 10.2, 10.2);
}

/*#include<iostream>
using namespace std;
int sum(int, int);
float sum(float , float, float );
void sum();


int sum(int a, int b)
{
	return(a+b);
}

float sum(float a, float b, float c)
{
	return(a+b);
}
void sum()
{
	int i=20, j=90;
	cout<<"\n\nThe sum value is \t"<<(i+j);
}

void sum(float);

void sum(float i)
{
	cout<<"\n\n The sum with two float values\t"<<(i+2.5);
}

int main()
{
	int a, b;

	cout<<"Enter any two numbers: \t";
	cin>>a>>b;

	cout<<"\n\n The sum of two integer is \t "<<sum(a,b);
	sum();
	cout<<"\n\nThe sum of three float values is \t"<<sum(10.25, 65.2,3.5);
    sum(10.25);
}
*/
