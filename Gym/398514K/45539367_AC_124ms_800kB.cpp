#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m;cin>>n>>m;
    vector<int>v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int x;
    for (int i = 0; i < m; ++i) {
        cin>>x;
        cout<<upper_bound(v.begin(),v.end(),x)-v.begin()<<" ";
    }


    return 0;
}
