#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0);
//#define int long long
using namespace std;
const int N=26;
int freq[N];
signed main() {
    Fast;
    int n;cin>>n;
    char ch;
    for (int i = 0; i < n; ++i) {
         cin>>ch;
        freq[ch-'a']++;
    }
  for (int i = 0; i < N; ++i) {
      if(freq[i]!=0){
          for (int j = 0; j < freq[i]; ++j) {
                cout<<char(i+'a');
          }
      }
  }
  return 0;
}
