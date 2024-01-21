#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,k;cin>>n>>k;
    vector<pair<int,int>>v(k);
    for (int i = 0; i < k; ++i) {
        cin>>v[i].second>>v[i].first;
    }
    int cnt=0,ans=0;
    sort(v.begin(),v.end());
    for (int i = 0; i < k; ++i) {
        if(v[i].first>cnt && v[i].second>=cnt){
            ans++;
            cnt=v[i].first;
        }
    }
    cout<<ans<<"\n";
    return 0;
}