#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tc int t;cin >> t;while (t--)
#define ll long long
using namespace std;
int main() {
    FAST;
    int n;cin>>n;
    vector<int>a,b;
    int x;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        if(x&1)a.push_back(x);
        else b.push_back(x);
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    int sum1=0,sum2=0;
    if(a.size()>1)sum1=a[0]+a[1];
    if(b.size()>1)sum2=b[0]+b[1];
    if(a.size()<2 && b.size()<2){
        cout<<-1;
    }
    else
    cout<<max(sum1,sum2);
    return 0;
}
