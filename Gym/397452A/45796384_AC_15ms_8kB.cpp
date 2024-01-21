#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
int const N=26;
bool freq[N];
signed main() {
    Fast;
    int n;cin>>n;
    string str;cin>>str;
    for (int i = 0; i < n; ++i) {
        str[i]= ::tolower(str[i]);
        freq[str[i]-'a']= true;
    }
    for (int i = 0; i < N; ++i) {
        if(!freq[i]){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";

    return 0;
}
