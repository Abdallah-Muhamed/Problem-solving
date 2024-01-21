#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
   string s1,s2;
   int n;cin>>n;
   for (int i = 0; i < n; ++i) {
       s1+='W';
       s2+=((i%2==0)?'W':'R');
   }

   for (int i = 0; i < n; ++i) {
       cout<<((~i&1)?s1:s2)<<"\n";
   }
   return 0;
}