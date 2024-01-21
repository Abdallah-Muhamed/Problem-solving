#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
  int n;cin>>n;
  string s;cin>>s;
  string ans="";
  for (int i = 0; i < s.length(); ++i) {
      ans+=(((s[i]-65)+n)%26)+65;
  }
  cout<<ans;
  return 0;
}
