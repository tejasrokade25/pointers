#include<iostream>
using namespace std;

int main(){

char a[10];
char *p=a;
int i,j;
cout << "Enter a 10 string" <<endl;
cin >> a;

for(i=0; i<10; i++){
	for(j=i; j<10; j++){
		cout<< *(p+j);
	}
	cout <<"/n";
}

return 0;
}
