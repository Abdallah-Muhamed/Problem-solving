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

int n, s, cost = 0, k = 0;

bool valid(int mid, vector<int> a) {
    cost = 0;
    for (int i = 0; i < n; ++i) {
        a[i] = (a[i] + ((i + 1) * mid));
    }
    sort(all(a));
    for (int i = 0; i < mid; ++i) {
        cost += a[i];
    }
    return (cost <= s);
}

signed main() {
    RunForrest;

    cin >> n >> s;
    vector<int> a(n);
    get(i, a, n);
    int l = 1, r = n, ans = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (valid(mid, a)) {
            ans = cost;
            k = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << k << " " << ans << "\n";


    return 0;
}