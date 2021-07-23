/* Write a program to find average marks of the subjects of a student.
Throw multiple exceptions and define multiple catch statements to handle
division by zero as well as array index out of bounds exceptions */


#include <iostream>
using namespace std;

int main()
{
	int n;
	int marks[5];
	float avg = 0, tot = 0;
	cout << "\n Enter the no of subjects you want to read marks";
	cin >> n;
	cout << "\n Enter the marks of " << n << " subjects\n";
	try
	{
		if (n > 0 && n <= 5)
		{
			for (int i = 1; i <= n; i++)
			{
				cout << "Enter marks of subject  " << i << " :\t";
				cin >> marks[i];
				tot += marks[i];
			}
			avg = tot / n;
			cout << "\ntotal marks :\t" << tot << "\n average of marks:\t" << avg;
		}
		else if (n == 0)
			throw (bool) 0;
		else if (n > 5)
			throw n;
	}
	catch (bool b)
	{
		cout << "\n Divide by Zero Error...";
	}
	catch (int i)
	{
		cout << "\n array index out of bound";
	}
}
