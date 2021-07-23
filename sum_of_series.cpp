#include <iostream>
using namespace std;


int main(){
  int n, x;
  double sum=0, a=1, b, c;
  b=a+1;
  c=a+2;
  cout << "enter n value" <<endl;
  cin >> n;
  x = n/2 - 1;
  cout << x<<endl;
  for(int i=0; i<=x; i++){
    sum += (a/b)-(b/c);
    a = c;
    b = c+1;
    c = c+2;

  }
  cout << sum;

}
