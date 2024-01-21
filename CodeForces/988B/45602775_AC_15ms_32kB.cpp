#include <bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(string s1,string s2){
    return s1.length()<s2.length();
}
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;cin>>n;
    vector<string>v(n),ans(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),cmp);
    for (int i = 0; i < n-1; ++i) {
            if(v[i+1].find(v[i])==string::npos){
                cout<<"NO\n";
                return 0;
            }
        }
        cout<<"YES\n";
    for (int i = 0; i < n; ++i) {
        cout<<v[i]<<"\n";
    }
    return 0;
}
