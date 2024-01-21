#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int l=0,r=n-1,ans=0;
    int sum1=a[l],sum2=a[r];
    while(l<r){
        if(sum1<sum2)sum1+=a[++l];
        else if(sum1>sum2)sum2+=a[--r];
        else{
            ans= max(ans,sum1);
            sum1+=a[++l];
            sum2+=a[--r];
        }
    }
    cout<<ans;
    return 0;
}
