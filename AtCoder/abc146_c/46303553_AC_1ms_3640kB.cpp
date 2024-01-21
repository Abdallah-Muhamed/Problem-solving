#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a,b,x;cin>>a>>b>>x;
    int l=0,r=1e9+1;
    while(l+1!=r){
        int mid=l+(r-l)/2;
        int cost=(a * mid) + (b * to_string(mid).length());
        if(cost<=x){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    cout<<l;
    return 0;
}
