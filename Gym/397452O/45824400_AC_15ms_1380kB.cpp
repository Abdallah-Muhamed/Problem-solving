#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0);
//#define int long long
using namespace std;
int ans,n,k,a[10000];
pair<int,int>val[10000];
vector<int>v;

signed main() {
    Fast;
    int i,j;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        val[i].first=a[i];
        val[i].second=i+1;
    }
    sort(val,val+n);
    for(i=n-1;i>=n-k;i--)
    {
        v.push_back(val[i].second);
        ans+=val[i].first;
    }
    sort(v.begin(),v.end());
    cout<<ans<<"\n";
    int last=0;
    for(i=0;i<k-1;i++)
    {
        cout<<v[i]-last<<" ";
        last=v[i];
    }
    cout<<n-last;
    return 0;
}
