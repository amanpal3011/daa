#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int test;
    cin >> test;
    while (test--) {
    int n,t,k;
    int arr[100];
    cin >> t;
    while(t){
        cin >> n;
        for(int i=0;i<n;i++)
            cin >> arr[i];
        cin >> k;
        int count =1;
        for(int i=0;i<n;i++){
            for(int j=i;j<n-i-1;j++){
                if(arr[i]-arr[j]==k || arr[i]-arr[j]==-k){
                count++;
                }
            }
        }
        cout << count << endl;

    t--;
    }
}
return 0;
}
