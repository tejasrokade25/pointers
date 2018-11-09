// function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.
#include<iostream>
#include<cstring>
using namespace std;

// The req func
int wo(char *q)
{
	int count;
	// Checking for \0(null character)
	for(*q;*q!='\0';q++)
	{
	count++;
	}
	return count;
}

// The main part
int main()
{
	cout << "Gimme a sentence bro." << endl;
	char a[100];
	cin.getline (c,100); // Getline gives you input in sequence.
	char *l = a;
	int t = wo(p);
	cout << "length of string = " << t <<endl;

	return 0;
}
