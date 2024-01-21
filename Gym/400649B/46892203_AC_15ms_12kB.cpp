/*
( إِنَّ اللَّهَ وَمَلَائِكَتَهُ يُصَلُّونَ عَلَى النَّبِيِّ ۚ يَا أَيُّهَا الَّذِينَ آمَنُوا صَلُّوا عَلَيْهِ وَسَلِّمُوا تَسْلِيمً )
*/
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define all(v) (v).begin(), (v).end()
#define get(i, a, n) \
    for (int(i) = 0; (i) < (n); ++(i)) { cin >> (a)[(i)]; }
#define print(i, a, n) \
    for (int(i) = 0; (i) < (n); ++(i)) { cout << (a)[(i)] << " "; }
#define RunForrest                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
using namespace std;
signed main() {
    RunForrest double c, t;
    cin >> c >> t;
    double l = 0, r = 2e9 + 2, ans = 0;
    while (abs(l - r) > 1e-6) {
        double mid = (l + r) / 2;
        if ((c * mid * ::log2(mid)) <= t) {
            ans = mid;
            l = mid;
        } else {
            r = mid;
        }
    }
    cout << fixed << setprecision(6)<<ans;


    return 0;
}
