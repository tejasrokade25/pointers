#include<iostream>
#include<cstring>
using namespace std;

void reverseString(char *b)
{
	  // WRITE YOUR CODE HERE
	  cout << "The reverse is ";
	  for(int a=10;a>=0;a--)
	  {
	  cout << *(b+a);
	  }
	  cout << endl;
}

int main()
{
  	char k[10] = "abcde";
 	reverseString(k); 
        // calling the function
 	return 0;
}

