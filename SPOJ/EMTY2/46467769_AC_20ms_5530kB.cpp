#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    int a=1;
    while (a<=t) {
       stack<char>st;
       string str;cin>>str;
       bool flag = false ;
       int n=str.length();
       for (int i = 0; i < n; ++i) {
            if(str[i]=='1' ){
                 st.push(str[i]);
            }
            else{
                if(st.empty()){
                    flag=true;
                }
                else{
                    if(st.top()=='1'){
                        st.push('0');
                    }
                    else{
                        st.pop();st.pop();
                    }
                }
            }
       }
       if(flag || !st.empty()){
            cout<<"Case "<<a<<": no\n";
       }
       else{
            cout<<"Case "<<a<<": yes\n";

       }
       a++;
    }

    return 0;
}
