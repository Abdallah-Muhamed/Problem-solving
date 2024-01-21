#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tc int t;cin >> t;while (t--)
#define ll long long
using namespace std;
int main() {
    FAST;
    int n,h,x;cin>>n>>h>>x;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    for (int i = 0; i < n; ++i) {
        if(h+arr[i]>=x)
        {
            cout<<i+1;
            break;
        }
    }
    return 0;
}
