#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);;;
#define tc int t;cin >> t;while (t--)
#define ll long long
using namespace std;
void work(){
    ll n,m,d;
    cin>>n>>m>>d;
    vector<ll>a(n),b(m);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    while(!a.empty() && !b.empty()){
        if(abs(a[n-1]-b[m-1])<=d){
            cout<<a[n-1]+b[m-1];
            return ;
        }
        if(a[n-1]>b[m-1])a.pop_back(),n--;
        else b.pop_back(),m--;
}
cout<<-1;
}
int main() {
    FAST
 //   tc{
            work();
   // };
}
