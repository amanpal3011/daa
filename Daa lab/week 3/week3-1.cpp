#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) cin >> arr[i];
        int minIdx, cmp = 0, shifts = 0;
        for (int i = 0; i < n - 1; ++i) {
            minIdx = i;
            for (int j = i + 1; j < n;++j) {
                if (arr[j] < arr[minIdx]) minIdx = j;
                cmp++;
            }
            int tmp = arr[minIdx];
            arr[minIdx] = arr[i];
            arr[i] = tmp;
            shifts++;
        }
        for (int i = 0; i < n; ++i) cout << arr[i] << " ";
        cout << "\nComparisons = " << cmp;
        cout << "\nShifts = " << shifts;
        cout << endl;
    }
    return 0;
}
