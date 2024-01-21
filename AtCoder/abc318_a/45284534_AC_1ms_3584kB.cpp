#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tc int t;cin >> t;while (t--)
#define ll long long
using namespace std;
int main() {
    FAST;
  int n,m,p;cin>>n>>m>>p;
  int ans=0;
  while(m<=n && m>0){
      ans++;
      m+=p;
  }
  cout<<ans;
}
