#include<iostream>
using namespace std;

int main(){
int arr[10]={18,24,17,5,13,4,6,36,8,54};

//print of array by normal index method
int a;
	for(a=0; a<10; a++){
		cout<< arr[a] <<endl;
	}

//print of array by pointer method
int *p=arr;
	for(a=0; a<10; a++){
		cout<< *(p+a) <<endl;
	}

return 0;
}
