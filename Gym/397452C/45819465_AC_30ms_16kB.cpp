#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0);
//#define int long long
using namespace std;
int const N=201;
int freq1[N]{};
int freq2[N]{};
signed main() {
    Fast;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int n=s1.length(), m=s2.length();
    for(int i=0;i<n;++i){
        if(s1[i]!=' ')
        freq1[s1[i]]++;
    }
    for(int i=0;i<m;++i){
        if(s2[i]!=' ')
        freq2[s2[i]]++;
    }

    for(int i=0;i<N;++i){
        if(freq2[i]>freq1[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
