#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tc int t;cin >> t;while (t--)
#define ll long long
using namespace std;
int main() {
    FAST;
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; ++i) {
        cout<<a[i]<<" ";
        if(a[i+1]>a[i]){
            for (int j = a[i]+1; j < a[i+1]; ++j) {
                cout<<j<<" ";
            }
        }
        else{
            for (int j = a[i]-1; j > a[i+1]; --j) {
                cout<<j<<" ";
            }
        }
    }
    cout<<a[n-1];
    return 0;
}
