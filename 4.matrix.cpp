/*Write a program to add corresponding elements of two 2-D matrices
using friend function.
Create two classes each capable of storing one 2-D matrix.
Declare the matrices under private access specifier and
access them outside the class.*/
#include <iostream>
using namespace std;
class Matrices2;//class abstract definition
class Matrices1
{
  private :
   int a[10][10];
  public:
  	int r1, c1;
    void readMatrixRC()
    {
     	cout<<"\r1 Enter first matrix row and col size  ";
  	  cin>>r1>>c1;
	  }

  	void readValues()
  	{
  		cout<<"\nEnter values into first matrix ";
    	for(int i=0;i<r1;i++)
    	{
    	  for(int j=0;j<c1;j++)
    	  {
      	  cout<<"\na["<<i<<"]["<<j<<"] value\t";
      	  cin>>a[i][j];
        }
      }
  	}

  	void printData()
  	{
  		cout<<"\nThe given first matrix values are \n";
  	  for(int i=0;i<r1;i++)
  	  {
  	    for(int j=0;j<c1;j++)
  	    {
  		    cout<<a[i][j]<<"\t";
  	    }
  		cout<<endl;
      }
    }

    friend void Adding_corresponding_values(Matrices1 , Matrices2 );
};

class Matrices2
{
  private :
   int b[10][10];
   public:
   	int r2,c2;
   void readMatrixRC()
   {
   	cout<<"\r2 Enter Second matrix row and col size ";
	  cin>>r2>>c2;
	}

  void readValues()
  {
    cout<<"\nEnter values into second matrix ";
	  for(int i=0;i<r2;i++)
	  {
  	  for(int j=0;j<c2;j++)
  	  {
  		  cout<<"\nb["<<i<<"]["<<j<<"] value\t";
  		  cin>>b[i][j];
  	  }
    }
	}

	void printData()
	{
  cout<<"\nThe given second matrix values are \n";
  for(int i=0;i<r2;i++)
  {
    for(int j=0;j<c2;j++)
    {
    cout<<b[i][j]<<"\t";
    }

  cout<<endl;
  }
}
  friend void Adding_corresponding_values(Matrices1 , Matrices2 );
};

void Adding_corresponding_values(Matrices1 fm1, Matrices2 fm2)
{
	for(int i=0;i<fm1.r1;i++)
	 {
	    for(int j=0;j<fm1.c1;j++)
	    {
		  cout<<(fm1.a[i][j]+fm2.b[i][j])<<"\t";
	    }

		cout<<endl;
   }
}

int main()
{
	Matrices1 m1;
    Matrices2 m2;

	m1.readMatrixRC();
	m2.readMatrixRC();

	if(m1.r1==m2.r2 && m1.c1==m2.c2)
	{

	 m1.readValues();
	 m2.readValues();

	 m1.printData();
	 m2.printData();

    cout<<"\nThe resultant matrix after addition is \n";
	 Adding_corresponding_values(m1, m2);
 }
 else
 {
   cout<<"\n the rows and columns of both the matrices should match with each other \n else addition not possible";
 }
}
