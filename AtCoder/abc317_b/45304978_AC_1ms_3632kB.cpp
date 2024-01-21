#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define tc int t;cin>>t;while(t--)
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
int main() {
    FAST
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i <n ; i++) {
        int j=i+1;
        if(arr[j]-arr[i]==2){
            cout<<arr[i]+1;
        }
    }
    return 0;
}