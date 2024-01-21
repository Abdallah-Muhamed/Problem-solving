#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    stack<int>st;
    int c=1;
    for (int i = 0; i < n; ++i) {
        int x;cin>>x;
        while(c<=x)st.push(c++);
        if(x==st.top())st.pop();
    }
    cout << (st.empty() ? "YES" : "NO");


    return 0;
}
