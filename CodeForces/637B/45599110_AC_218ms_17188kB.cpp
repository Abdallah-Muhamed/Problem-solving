#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    stack<string>st;
    map<string,int>mp;
    int n;cin>>n;
    string str;
    for (int i = 0; i < n; ++i) {
        cin>>str;
        st.push(str);
    }
    for (int i = 0; i < n; ++i) {
        if(mp[st.top()]==0)
        {
            cout<<st.top()<<"\n";
            mp[st.top()]=1;
        }
        st.pop();
    }
    return 0;
}
