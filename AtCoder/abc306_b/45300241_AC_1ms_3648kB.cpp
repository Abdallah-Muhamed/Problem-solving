#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tc int t;cin >> t;while (t--)
#define ll long long
using namespace std;
int main() {
    FAST;
   unsigned ll ans=0;
    for (ll i = 0; i < 64; ++i) {
        ll x;cin>>x;
        ans+=x<<i;
    }
    cout<<ans;
}
