#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> result(n, -1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[i] >= st.top()) {
            st.pop();
        }
        if (!st.empty()) {
            result[i] = st.top();
        }
        st.push(a[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << result[i]<< " ";
    }
    return 0;
}
