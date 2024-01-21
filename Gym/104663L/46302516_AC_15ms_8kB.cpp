#include <bits/stdc++.h>
using namespace std;
#define ll long long
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int x,y,z,n;cin>>x>>y>>z>>n;
    double tmp=::ceil((x*y)*(0.6));
    int target= tmp;
    int rem=x-z;
    int sol=n+(rem*y);
    vector<int>ans;
    if(sol>=target){
        cout<<"Yes\n";
        int cnt=n;
        for (int i = 0; i < rem; ++i) {
            if(target-cnt<y)
                ans.push_back(max((target-cnt),0));
            else
                ans.push_back(y);
            cnt+=y;
        }
        for (int i = rem-1; i >=0; --i) {
            cout<<ans[i]<<' ';
        }
    }
    else{
        cout<<"No\n";
    }

    return 0;
}
