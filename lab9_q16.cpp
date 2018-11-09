#include<iostream>
using namespace std;

int main(){

char a[10];
char *p=a;
int i,j;
cout<<"Enter a 10 character string"<<endl;
cin>>a;


for(i=0; i<10; i++){
	for(j=(10-i)-1; j<10; j++){
		cout<< *(p+j);
	}
cout<<endl;
}

return 0;
}
