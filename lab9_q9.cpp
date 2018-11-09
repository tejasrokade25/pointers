// function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.
#include<iostream>
using namespace std;
// The function
void saw(char *a,char c)
	{
	int b;
	for (int i=0;*(p+i)!='\0';i++)
	{b = i;
		if(*(a+i)==c)
		{break;}
	}
	if (*(a+b)!='\0')
	{
	cout << "True" << endl;
	}
	else cout << "False" << endl;
}

int main()
	{
	// Asking for size
	int j;
	cout << "What is the size of your array?" << endl;
	cin >> j;

	// Forming an array
	char a[j+1];
	char c;
	cout << "Gimme an array." << endl;
	for(int i=0;i<j;i++)
	{
	cin >> a[i];
	}

	// Asking for wanted char
	cout << "What character do sawu wish to find in the array?" << endl;
	cin >> c;
	char *p = &a[0];

	// Apply saw
	saw(p,c);
	return 0;
}
