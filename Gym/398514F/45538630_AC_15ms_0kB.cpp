#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;cin>>n>>k;
    int x;map<int,int>mp;
    vector<int>ans;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        if(mp[x]==0){
            mp[x]=1;
            ans.push_back(i+1);
        }
    }
    if(ans.size()>=k){
        cout<<"YES\n";
        for (int i = 0; i < k; ++i) {
            cout<<ans[i]<<" ";
        }
    }
    else cout<<"NO\n";

    return 0;
}
