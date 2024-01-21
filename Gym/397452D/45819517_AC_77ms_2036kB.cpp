#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0);
#define int long long
using namespace std;
int const N=1e5+7;
int pre[N];
signed main() {
    Fast;
   int n,q;cin>>n>>q;
   cin>>pre[1];
   for (int i = 2; i <= n; ++i) {
       cin>>pre[i];
       pre[i]+=pre[i-1];
   }
   while(q--){
       int l,r;cin>>l>>r;
       cout<<pre[r]-pre[l-1]<<'\n';
   }
   return 0;
}
