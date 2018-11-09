// function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.
#include<iostream>
using namespace std;

//Function for giving pointer of the max value
double *lar (double arr[],int n)
{
	double lr = arr [0];
	for (int i=0;i<n;i++){
	if (lr < arr[i]){lr = arr[i];}}
	double *a;
	for (int j=0;j<n;j++){if(arr[j]==lr){a = &arr[j];}}
	return a;
}

// Function for printing the pointer
void ma(double arr[], int n)
{
	double *x = lar(arr,n);
	cout << "The address to the maximum value of array is " << x << endl;
}

// The main part
int main()
{
	int n;
	cout << "How long is your array?" << endl;
	cin >> n;

// NULL Case
	if (n==0)
	{
	cout << "NULL" << endl;
	return 0;
	}

// Otherwise
	double arr[n];
	cout << "Elements of your array plz." << endl;
	for (int i=0;i<n;i++)
	{
	cin >> arr[i];
	}

	ma(arr,n);
	return 0;
}

	
