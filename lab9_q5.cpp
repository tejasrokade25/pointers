// code which prints the characters in a cstring in a reverse order.
#include<iostream>
using namespace std;


int main(){
	// declaration of variables
	char c[10] = "abcde";
	char* ptr;

	// WRITE YOUR CODE HERE
	ptr = c;
	cout << "The reverse is ";
	for(int i=10;i>=0;i--)
		{
		cout << *(cptr+i);
		}
	cout << endl;
	return 0;
}
