#include <iostream>
#include <string.h>
  using namespace std;
class StringPalindrome
{
	private:
		char str[40];
	public:

     void isPalindrome(char str[])
     {
        int l = 0;
        int len = strlen(str) - 1;


    while (len > l)
    {
        if (str[l++] != str[len--])
        {
            printf("%s is Not Palindrome", str);
            return ;
        }
    }
    printf("%s is palindrome", str);
}
};

int main()
{
     StringPalindrome sp;
	 sp.isPalindrome("MALAYALAM")	;

	 return 0;
}
