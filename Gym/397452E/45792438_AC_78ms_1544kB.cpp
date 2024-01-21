#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0); 
#define int long long
using namespace std;
const int N=1e5+9;
int pre[N];
signed main() {
    Fast;
    int n,q;cin>>n>>q;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    while(q--){
        int l,r,x;cin>>l>>r>>x;
        l--,r--;
        pre[l]+=x;pre[r+1]-=x;
    }
    for (int i = 1; i < n; ++i) {
        pre[i]+=pre[i-1];
    }
    for (int i = 0; i < n; ++i) {
        cout<<pre[i]+a[i]<<" ";
    }
    return 0;
}
/*
 * 3 3 5 5 5
 * 4 3 6 5 6
 *
 *
 * */