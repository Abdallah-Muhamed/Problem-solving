#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<char>st;
   string str;cin>>str;
   int n=str.length();
    int ans=0;
    for (int i = 0; i < n; ++i) {
        if(str[i]=='('){
            st.push(str[i]);
        }
        else{
            if(!st.empty()){
                ans++;
                st.pop();
            }
        }
    }
        cout<<ans*2;

    return 0;
}
