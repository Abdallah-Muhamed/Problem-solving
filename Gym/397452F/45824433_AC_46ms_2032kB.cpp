#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
const int k=1e5+3;
ll freq[k];
signed main() {
    Fast;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>freq[i];
    }
    for(int i=0;i<m;i++)
    {
        int y,x,z;
        cin>>y>>x>>z;
        freq[x]+=z;
        freq[y]-=z;
    }

    for(int i=0;i<=n;i++)
    {
        if(freq[i]<0)
        {
            cout<<"NO"<<"\n";
            return 0;
        }
    }
    cout<<"YES"<<"\n";


    return 0;
}
