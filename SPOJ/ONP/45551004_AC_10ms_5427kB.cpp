#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;cin>>n;
    stack<char>st;
    while(n--){
        string str;cin>>str;
        int m=str.length();
        for (int i = 0; i < m; ++i) {
            if(str[i]=='('){}
            else if(str[i]==')'){
                cout<<st.top();
                st.pop();
            }
            else if(isalpha(str[i]))cout<<str[i];
            else st.push(str[i]);
        }
        cout<<"\n";
    }
    return 0;
}
