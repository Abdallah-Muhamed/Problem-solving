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

bool valid(vector<double> &v, double mid,double k) {
    double had = 0;
    double need = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] > mid)had += v[i] - mid;
        else need += mid - v[i];
    }
    had *=(k);
    return (had >= need);
}

signed main() {
    RunForrest;
    int n;
    double k;
    cin >> n >> k;
    vector<double> v(n);
    get(i, v, n);
    k = (100 - k) / 100;
    double l = 0, r = 1e5;
    while (abs(r - l) > 1e-9) {
        double mid = (l + r) / 2;
        if (valid(v, mid,k)) {
            l = mid;
        } else {
            r = mid;
        }
    }
    cout <<fixed<<setprecision(9)<< l;
    return 0;
}