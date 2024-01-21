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
int chk(int n){
    return (n*(n+1))/2;
}
signed main() {
    RunForrest;
    tc{
            int n;cin>>n;
            int l=1,r=2e9;
            int ans=1;
            while(l<=r){
                int mid=(l+r)/2;
                if(chk(mid)>=(n)){
                    ans=mid;
                    r=mid-1;
                }
                else{
                  l=mid+1;
                }
            }
            cout<<ans<<'\n';
    };



    return 0;
}