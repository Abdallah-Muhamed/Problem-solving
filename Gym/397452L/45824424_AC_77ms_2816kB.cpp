#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long
using namespace std;
const int N=1e5 + 5;
ll pre[N],sortpre[N];
signed main() {
    Fast;
    int n ;cin>> n;
    int input;
    for(int i=0;i<n;i++)
        cin>>input,pre[i]=input,sortpre[i]=input;

    sort(sortpre,sortpre+n);
    for(int i=1;i<n;i++)
    {
        pre[i]+=pre[i-1];
        sortpre[i]+=sortpre[i-1];
    }

    int m;cin>>m;
    while(m--){
        int t,l,r;
        cin>>t>>l>>r;
        if(t==1)
        {
            if(l>1)
                cout<<pre[r-1]-pre[l-2]<<"\n";
            else
                cout<<pre[r-1]<<"\n";

        }
        else if(t==2)
        {
            if(l>1)
                cout<<sortpre[r-1]-sortpre[l-2]<<"\n";
            else
                cout<<sortpre[r-1]<<"\n";

        }
    }
    return 0;
}
