#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i) {
        int mx = 0;
        for (int j = 0; j < n; ++j) {
            int num;
            cin >> num;
            mx = max(mx, num);
        }
        arr[i] = mx;
    }
     for (int i = 0; i < n; ++i) {
        if (arr[i] == n - 1) {
            arr[i] = n;
            break;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i]<<" ";
    }


    return 0;
}
