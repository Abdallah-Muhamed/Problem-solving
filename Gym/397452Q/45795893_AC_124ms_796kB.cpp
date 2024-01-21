#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0);
//#define int long long
using namespace std;
const int N=2e5+6;
int ans[N];
signed main() {
    Fast;
    int n,k,q;cin>>n>>k>>q;
    for (int i = 1; i <= n; ++i) {
        int a,b;cin>>a>>b;
        ans[a]+=1;
        ans[b+1]-=1;
    }
    for (int i = 2; i <= N; ++i) {
        ans[i]+=ans[i-1];
        (ans[i-1]>=k)?ans[i-1]=1:ans[i-1]=0;
    }
    for (int i = 2; i <= N; ++i) {
        ans[i]+=ans[i-1];
    }
    while(q--){
        int l,r;cin>>l>>r;
        cout<<ans[r]-ans[l-1]<<'\n';
    }
    return 0;
}
