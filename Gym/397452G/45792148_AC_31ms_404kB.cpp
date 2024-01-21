#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N=1e5+9;
int freq[N];
int main() {
    Fast;
    int n,q;cin>>n>>q;
    while(q--){
        int z,x;cin>>z>>x;
        if(z==1){
            freq[x]++;
        }
        else{
            cout<<freq[x]<<"\n";
        }
    }
    return 0;
}