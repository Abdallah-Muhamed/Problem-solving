#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N=1e5+9;
int pre[N];
int main() {
    Fast;
    string str;cin>>str;
    int n=str.length();
    for (int i = 0; i < n; ++i) {
        if(str[i]=='a')pre[i+1]=1;
    }
    for (int i = 2; i < n+3; ++i) {
        pre[i]+=pre[i-1];
    }
    int q;cin>>q;
    while(q--){
        int l,r;cin>>l>>r;
        cout<<pre[r]-pre[l-1]<<"\n";
    }
    return 0;
}