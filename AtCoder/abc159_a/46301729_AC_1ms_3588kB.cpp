#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
  int n,m;cin>>n>>m;
  int ans=(n*(n-1)/2)+(m*(m-1)/2);
  cout<<ans;

  return 0;
}
