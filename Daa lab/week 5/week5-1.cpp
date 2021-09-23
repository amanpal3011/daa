#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
char freq[26];
void countSortMaxFreq(char arr[],int n){
	for(int i=0;i<26;i++)
		freq[i]=0;
	for(int i=0;i<n;i++){
		++freq[(int)(arr[i])-97];
	}
	
}
int main(){
	
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		char arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		
		countSortMaxFreq(arr,n);
		int max= *max_element(freq,freq+26);
		int index = max_element(freq,freq+26)-freq;
		char alph = 'a' + (char)(index);
		if(max>1)
			cout << alph << "-" << max << endl;
		else
			cout << "No Duplicate Present" << endl;
	}
}
