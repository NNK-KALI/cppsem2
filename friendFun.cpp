//friend function
#include <iostream>
using namespace std;

class FriendFunction
{
	int a, b ;
	public:

		void getdata()
		{
			 cout<<"\n\nEnter the value of a and b: ";
			 cin>>a>>b;
		}

		friend void putdata(FriendFunction);

};

void putdata(FriendFunction ff)
{
			cout<<"The values of a and b are :"<<ff.a<<", "<<ff.b;
		}

int main()
{
	FriendFunction f;
	f.getdata();
	putdata(f);
}
