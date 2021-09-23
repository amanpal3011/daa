#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

void sumPairIsEqToK(int arr[],int n,int key){
	int left=0;
	int right=n-1;
	int flag=0;
	while(left<right){
		if(arr[left]+arr[right]==key){
			cout << arr[left] << " " << arr[right] << ", ";
			right--;
			flag++;
		}
		else if(arr[left]+arr[right]>key){
			right--;
		}
		else if(arr[left]+arr[right]<key){
			left++;
		}
	}
	
	if(flag==0)
			cout << "No Such Pair Exist\n";
		else
			cout << endl;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		int k;
		cin >> k;
		sort(arr,arr+n);
	 	sumPairIsEqToK(arr,n,k);
		
	}
}
