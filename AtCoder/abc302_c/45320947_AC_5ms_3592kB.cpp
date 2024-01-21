#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tc int t;cin >> t;while (t--)
#define ll long long
using namespace std;
int main() {
    FAST;
    int n,t;cin>>n>>t;
    vector<string>v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    do{
        bool is=1;
        for (int i = 0; i < n-1; ++i) {
            int c=0;
            for (int j = 0; j < t; ++j)
                if(v[i][j]!=v[i+1][j])c++;
            if(c!=1)is=0;
        }
            if(is)  {
                cout<<"Yes";
                return 0;
            }

    } while(next_permutation(v.begin(),v.end()));
    cout<<"No\n";
}
