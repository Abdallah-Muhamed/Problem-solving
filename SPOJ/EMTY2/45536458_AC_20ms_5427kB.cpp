#include <bits/stdc++.h>
using namespace std;
int main() {
    int a=1,t;cin>>t;
    while(a<=t){
        string str;cin>>str;
        int cnt=0,n=str.length();
        bool flag=0;
        for (int i = n-1; i >-1 ; --i) {
            if(str[i]=='1') {
                if (cnt < 2) {
                    flag=1;
                    break;
                }
                else{
                    cnt-=2;
                }
            }
            else{
                cnt++;
            }
        }
        if(cnt!=0 || flag){
            cout<<"Case "<<a<<": no\n";
        }
        else{
            cout<<"Case "<<a<<": yes\n";
        }
        a++;
    }

    return 0;
}
