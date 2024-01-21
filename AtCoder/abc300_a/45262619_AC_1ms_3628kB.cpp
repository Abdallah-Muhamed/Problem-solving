#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tc int t;cin >> t;while (t--)
#define ll long long
using namespace std;
int main() {
    FAST;
    int n,a,b,ans;cin>>n>>a>>b;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        if(a+b==arr[i]){
            ans=i+1;
        }
    }
    cout<<ans;
}
