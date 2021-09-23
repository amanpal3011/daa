#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int arr[n];
        bool flag = false;
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = i + 2; k < n; k++) {
                    if (arr[i] + arr[j] == arr[k]) {
                        cout << i << "," << j << "," << k;
                        flag = true;
                        break;
                    }
                }
            }
        }
        if (!flag) {
            cout << "No sequence found";
        }
    }
}
