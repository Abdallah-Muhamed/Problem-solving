#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0);
//#define int long long
using namespace std;
const int N=1e5+7;
bool occ[N];
int suf[N];
signed main() {
    Fast;
    int n,m;cin>>n>>m;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=n-1;i>=0;i--) {
        suf[i]=suf[i+1]+!occ[x[i]];
        occ[x[i]]=1;
    }
    while(m--){
        int r;cin>>r;
        cout<<suf[r-1]<<"\n";
    }
    return 0;
}
