#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0);
//#define int long long
using namespace std;
int const N=26;
int freq[N]{};
int del[N]{};
signed main() {
    Fast;
    int n,k;cin>>n>>k;
    string str;cin>>str;
    for (int i = 0; i < n; ++i) {
        freq[str[i]-'a']++;
    }
    int t=0;
    while (k) {
        if(freq[t]){
            k--;
            del[t]++;
            freq[t]--;
        }
        else t++;
    }
    for (int i = 0; i < n; ++i) {
        if(del[str[i]-'a']){
            del[str[i]-'a']--;
            continue ;
        }
        cout<<str[i];
    }


    return 0;
}
