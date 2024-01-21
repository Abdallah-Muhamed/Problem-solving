#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    while(true){
        int n;cin>>n;
        if(n==0){
            return 0;
        }
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin>>a[i];
        }
        stack<int>st;
        int top,ans=INT_MIN,cnt;
        int i = 0;
        while( i < n) {
            if(st.empty() || a[st.top()]<=a[i])
                st.push(i++);
            else{
                top=st.top();
                st.pop();
                cnt=a[top]* (st.empty() ? i : i - st.top() - 1);
                if(cnt>ans){
                    ans=cnt;
                }
            }
        }
        while (!st.empty()) {
            top = st.top();
            st.pop();
            cnt
                    = a[top] * (st.empty() ? i : i - st.top() - 1);

            if(cnt>ans){
                ans=cnt;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
