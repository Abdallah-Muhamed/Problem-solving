#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tc int t;cin >> t;while (t--)
#define ll long long
using namespace std;
int main() {
    FAST;
    unsigned ll a,b;cin>>a>>b;
    if(a%b==0){
        cout<<a/b;
    }
    else{
        cout<<(a/b)+1;
    }
}