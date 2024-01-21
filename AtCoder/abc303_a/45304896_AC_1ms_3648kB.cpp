#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define tc int t;cin >> t;while (t--)
#define ll long long
using namespace std;
int main() {
    FAST;
    int n;cin>>n;
    string str1,str2;cin>>str1>>str2;
    for (int i = 0; i < n; ++i) {
        if(str1[i]=='0'){
            str1[i]='o';
        }if(str2[i]=='0'){
            str2[i]='o';
        }if(str1[i]=='1'){
            str1[i]='l';
        }if(str2[i]=='1'){
            str2[i]='l';
        }
    }
    for (int i = 0; i < n; ++i) {
        if(str1[i]!=str2[i]){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
}
