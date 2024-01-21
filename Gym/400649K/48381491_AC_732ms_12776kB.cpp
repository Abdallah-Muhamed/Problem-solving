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
int o, w;
string origin, wanted;

bool vaild(vector<int> &v, int mid) {
    unordered_map<int, int> mp;
    for (int i = 0; i < mid; ++i) {
        mp[v[i] - 1] = 1;
    }
    int i = 0, j = 0;
    while (i < w and j < o) {
        if ((wanted[i] == origin[j]) and !mp[j]) {
            i++,j++;
        } else {
            j++;
        }
    }
    return (i == w);

}

signed main() {
    RunForrest;
    cin >> origin >> wanted;
    o = origin.length(), w = wanted.length();
    vector<int> p(o);
    get(i, p, o);
    int l = 1, r = o, ans = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (vaild(p, mid)) {
            ans = mid, l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << "\n";
    return 0;
}