/*
 ( إِنَّ اللَّهَ وَمَلَائِكَتَهُ يُصَلُّونَ عَلَى النَّبِيِّ ۚ يَا أَيُّهَا الَّذِينَ آمَنُوا صَلُّوا عَلَيْهِ وَسَلِّمُوا تَسْلِيمً )
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define tc int t;cin>>t;while(t--)
#define all(v) (v).begin(), (v).end()
#define get(i,a,n) for (int (i) = 0; (i) < (n); ++(i)) {cin>>(a)[(i)];}
#define print(i,a,n) for (int (i) = 0; (i) < (n); ++(i)) {cout<<(a)[(i)]<<" ";}
#define RunForrest ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
bool chk(int mid,vector<int>&a,vector<int>&b,int k){
    int n=a.size();
    for (int i = 0; i < n; ++i) {
        k-= max(0LL,(a[i]*mid)-b[i]);
        if(k < 0) return false;
    }
    return true;
}
signed main() {
    RunForrest;
   int n,k;cin>>n>>k;
   vector<int>a(n),b(n);
   for (int i = 0; i < n; ++i) {
       cin>>a[i];
   }
   for (int i = 0; i < n; ++i) {
          cin>>b[i];
   }
   int l=1,r=2e9+5,ans=0;
   while(l<=r){
          int mid=(l+r)/2;
          if(chk(mid,a,b,k)){
              ans=mid;
              l=mid+1;
          }
          else{
              r=mid-1;
          }
   }

   cout<<ans;

   return 0;
}