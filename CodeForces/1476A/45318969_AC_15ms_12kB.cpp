#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tc int t;cin >> t;while (t--)
#define ll long long
using namespace std;
int main() {
    FAST;
   tc{
            ll n,k;cin>>n>>k;
            if(n%k==0){
                cout<<1<<'\n';
            }
            else{
                k=(n+k-1)/k*k;
                cout<<(k+n-1)/n<<"\n";

            }
    };
}
