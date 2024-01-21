#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t,q;
    cin>>n>>q;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a,a+n);
    int l,r;
    while(q--){
        cin>>t;
    l=0,r=n-1;
    int ans=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(a[mid]>t){
            r=mid-1;
            ans=a[mid];
        }
        else {
            l=mid+1;
        }
    }
        cout<<ans<<'\n';

    }
    return 0;
}
