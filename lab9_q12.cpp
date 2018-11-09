#include<iostream>
using namespace std;

int main(){
	int b;
	int i=2, j=3, k=b;	//declare variable
	int *ptr = &i;	 	//point to a
	k = *ptr;	
	
	//printing value a, b and *ptr
	cout << "variable 1= " << i <<endl;
	cout << "variable 2 = " << k << endl;
	cout << "pointer  " << *ptr <<endl;

	ptr = &j;

	//printing value i, j and *ptr
	cout << "variable 1" << i <<endl;
	cout << "variable 2" << j << endl;
	cout << "pointer " << *ptr <<endl;

return 0;
}
