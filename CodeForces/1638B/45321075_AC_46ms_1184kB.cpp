#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tc int t;cin >> t;while (t--)
#define ll long long
using namespace std;
void work(){
    int n,x;cin>>n;
    vector<int>e,o;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        if(x&1)o.push_back(x);
        else e.push_back(x);
    }
    if(is_sorted(e.begin(),e.end()) && is_sorted(o.begin(),o.end())){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}
int main() {
    FAST;
    tc{
            work();
    };
}