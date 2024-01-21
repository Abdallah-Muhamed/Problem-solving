#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int n,x;cin>>n>>x;
    int a[n];
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        v[i]={a[i],i+1};
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;++i)
    {
        int l=0,r=n-1;
        while(l<r){
            if(v[r].second==i+1)r--;
            else if(v[l].second==i+1)l++;
            else if(a[i]+v[l].first+v[r].first>x)r--;
            else if(a[i]+v[l].first+v[r].first<x)l++;
            else {
                cout<<i+1<<" "<<v[l].second<<" "<<v[r].second;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}