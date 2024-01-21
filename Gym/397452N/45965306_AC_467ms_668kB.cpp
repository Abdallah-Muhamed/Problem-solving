#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
const int N=1e5+7;
int freq[N];
signed main() {
    Fast
    int x,n;cin>>n;
    vector<int>v;
    int mx=INT_MIN;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        if(freq[x]==0){
            v.push_back(x);
        }
        freq[x]++;
        mx=max(mx,x);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < mx; ++i) {
        for (int j = 0; j < v.size(); ++j) {
            if(freq[v[j]]>0){
                cout<<v[j]<<' ';
                freq[v[j]]--;
            }
        }
        cout<<'\n';
    }

    return 0;
}
