#include<iostream>
#include<fstream>
using namespace std;
void findCommonElements(int arr1[],int arr2[],int n,int m){
	int i=0,j=0;
	int flag=0;
	for(int k=0;k<m+n;k++){
		if(arr1[i]==arr2[j]){
			cout << arr1[i] << " ";
			i++;
			j++;
			flag=1;
		}
		else if(arr1[i]>arr2[j]){
			j++;
		}
		else if(arr1[i]<arr2[j]){
			i++;
		}
	}
	if(flag==0)
		cout << "No Common\n";
}
int main(){
	int n,m;
	cin >> n;
	int arr1[n];
	for(int i=0;i<n;i++)
		cin >> arr1[i];
	cin >> m;
	int arr2[m];
	for(int i=0;i<m;i++)
		cin >> arr2[i];

	findCommonElements(arr1,arr2,n,m);
}
