/*
( إِنَّ اللَّهَ وَمَلَائِكَتَهُ يُصَلُّونَ عَلَى النَّبِيِّ ۚ يَا أَيُّهَا الَّذِينَ آمَنُوا صَلُّوا عَلَيْهِ وَسَلِّمُوا تَسْلِيمً )
*/
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define tc int t;cin >> t;while (t--)
#define all(v) v.begin(), v.end()
#define get(i, a, n)for (int i = 0; i < n; ++i) {cin >> a[i];}
#define print(i, a, n)for (int i = 0; i < n; ++i) {cout << a[i] << " ";}
#define RunForrest ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
bool valid(vector<int>&a,int mid,int c) {
    c--;
    int key=0;
    for (int i = 1; i < a.size(); ++i) {
        if((a[i]-a[key])>=mid){
            c--;
            key = i;
        }
        if(c==0)return 1;
    }
    return 0;

}
signed main() {
    RunForrest;
    tc{
    int n,c;cin>>n>>c;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(all(a));
       int l=1,r=1e9;
       int ans=1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(valid(a,mid,c)){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<ans<<"\n";
    };


    return 0;
}