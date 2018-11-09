#include<iostream>
using namespace std;

int main(){
// variables
int a;
double b;
float c;
char d;

//pointing to variables
int *ap = &a;	
double *bp =&b;
float *cp =&c;
char *dp =&d;



	cout << "Size of integer pointer " << sizeof(ap) <<endl;
	cout << "Size of double pointer " << sizeof(bp) <<endl;
	cout << "Size of float pointer " << sizeof(cp) <<endl;
	cout << "Size of character pointer " << sizeof(dp) <<endl;

	cout << "size of integer variable " << sizeof(a) <<endl;
	cout << "size of double variable " << sizeof(b) <<endl;
	cout << "size of float variable " << sizeof(c) <<endl;
	cout << "size of character variable " << sizeof(d) <<endl;

return 0;
} 
