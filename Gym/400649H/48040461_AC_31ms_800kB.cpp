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

bool valid(vector<int> &v, int mid, int k) {
    int j = 0;
    int sum =v[mid-1];
    if (sum > k)return 0;
    for (int i = mid; i < v.size(); ++i) {
        sum = v[i] - v[j++];
        if (sum > k)return 0;
    }
    return 1;
}

signed main() {
    RunForrest;
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    get(i, v, n)
    for (int i = 1; i < n; ++i) {
        v[i] += v[i - 1];
    }

    int l = 1, r = n, ans = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (valid(v, mid, k)) {
            l = mid + 1;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << "\n";
    return 0;
}