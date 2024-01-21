#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
  int n,x,ans=0;cin>>n;
  for (int i = 1; i <= n; ++i) {
      cin>>x;
      if(x&1 && ~(x+i)&1){
            ans++;
      }
  }
cout<<ans;
  return 0;
}
