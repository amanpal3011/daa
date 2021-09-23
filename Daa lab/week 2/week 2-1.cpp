#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int noc(int arr[], int n, int x)
{
	int res = 0;
	for (int i=0; i<n; i++)
		if (x == arr[i])
		res++;
	return res;
}

int main()
{
	int arr[] = {235,235,278,278,763,764,790,853,981,981 };
	int n = sizeof(arr)/sizeof(arr[0]);
	int x ;
	cout<<"key is:";
	cin >> x;
	cout<<"key is :"<< x <<"number of occurence is :";
	cout << noc(arr, n, x);
	return 0;
}
