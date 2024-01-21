#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0);
#define int long long
using namespace std;
int const N=2e5+7;
int freq[N];
signed main() {
    Fast;
    int n,cur=0,ans=-1,x;
    cin>>n;n*=2;
    for(int i=0;i<n;++i)
    {
        cin>>x;freq[x]++;
        (freq[x]==1)?cur++:cur--;
        ans=max(ans,cur);
    }
    cout<<ans;

    return 0;
}
