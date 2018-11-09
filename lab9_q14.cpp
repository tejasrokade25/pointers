#include<iostream>
using namespace std;


int main(){
char array[40];
cout<<"Enter your first name :"<<endl;
cin>>array;

//print characters by normal index method
int a;
for(a=0; array[a]!='\0';a++){
	cout<< array[a] <<endl;
}

//print characters by pointer method
char *p=array;
for(a=0; array[a] !='\0'; a++){
	cout<< *(p+a) <<endl;
}

return 0;
}
