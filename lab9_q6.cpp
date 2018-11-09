//function countEven(int*, int) which receives an integer array and its size, and returns the number of even numbers in the array. 
#include<iostream>
using namespace std;

// Function to choose even numbers
int chooseEven(int *p, int n){
	int a = 0;
	for(int i=0;i<n;i++)
	{
		if ((*(p+i)%2)==0){a++;}
	}
	return a;
}

// The main part
int main(){
	int n;
	cout << "Today we are going to find out how many even numbers are present in an array." << endl;
	cout << "How many numbers is your array going to have?" << endl;
	cin >> n;
	cout << "Plz type the numbers for the array." << endl;
	int arr[n];
	int *l = &arr[n];

	for(int i = 0;i<n;i++)
	{
	cin >> arr[i];
	}
	//calling of function
	cout << "There are " << chooseEven(arr,n) << " even numbers in the array." << endl;
	return 0;
}
