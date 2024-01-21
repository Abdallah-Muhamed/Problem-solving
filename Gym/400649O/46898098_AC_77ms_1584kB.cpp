/*
( إِنَّ اللَّهَ وَمَلَائِكَتَهُ يُصَلُّونَ عَلَى النَّبِيِّ ۚ يَا أَيُّهَا الَّذِينَ آمَنُوا صَلُّوا عَلَيْهِ وَسَلِّمُوا تَسْلِيمً )
*/
#include <bits/stdc++.h>
namespace defines {
#define ll long long
#define int long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define all(v) v.begin(), v.end()
#define get(i, a, n)              \
    for (int i = 0; i < n; ++i) { \
        cin >> a[i];              \
    }
#define print(i, a, n)            \
    for (int i = 0; i < n; ++i) { \
        cout << a[i] << " ";      \
    }
#define RunForrest                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

}
using namespace std;
signed main() {
    RunForrest;
    int n;
    cin >> n;

    vector<int> aliens(n + 1), prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        cin >> aliens[i];
    }
    sort(all(aliens));
    for (int i = 1; i <= n; ++i) {
        prefix_sum[i] += prefix_sum[i - 1] + aliens[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int power;
        cin >> power;
        int l = 1, r = n, ans = 0;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (aliens[mid] <= power) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if (ans == 0) {
            cout << -1 << "\n";
        } else {
            cout << ans << " " << prefix_sum[ans] << "\n";
        }
    }


    return 0;
}
