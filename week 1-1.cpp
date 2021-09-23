#include<iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n;i++) cin >> arr[i];
        int key, i;
        cin >> key;
        bool flag = false;
        for (i = 0; i < n; i++)
            if (arr[i] == key) { flag = true; break; }
        if (flag) cout << "Present ";
        else cout << "Not Present ";
        cout << ++i;
    }
}
