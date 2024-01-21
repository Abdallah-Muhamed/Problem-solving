#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tc int t;cin >> t;while (t--)
#define ll long long
using namespace std;
int main() {
    FAST;
    tc{
        ll n;cin>>n;
          bool is=0;
          for (ll i = 2; i< 100000; ++i) {
              if(n%(i*i)==0){
                  is=1;break ;
              }
          }
          if(is){
              cout<<"No\n";
          }
          else{
              cout<<"Yes\n";
          }
    };
}
