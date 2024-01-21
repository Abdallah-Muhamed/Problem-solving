#include <bits/stdc++.h>
using namespace std;
const long long flow =4294967296;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;cin>>n;
    long long ans=0,x;
    stack<long long>st;
    st.push(1);
    while(n--){
        string str;cin>>str;
        if(str=="for"){
            cin>>x;
            st.push(min(flow,st.top()*x));
        }
        else if(str=="add"){
           ans+=st.top();
        }
        else st.pop();
        if(ans>=flow){
            cout<<"OVERFLOW!!!";
            return 0;
        }
    }
    cout<<ans;
    return 0;
}
