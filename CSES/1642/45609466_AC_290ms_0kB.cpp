#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int n,x;cin>>n>>x;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;++i)
    {
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;++i) {
        for (int j = i + 1; j < n; ++j) {
            int l = j+1, r = n - 1;
            while (l < r) {
                int sum=v[i].first + v[l].first + v[r].first +v[j].first;
                if (sum > x)r--;
                else if (sum < x)l++;
                else {
                    cout << v[i].second<<" "<<v[j].second << " " << v[l].second << " " << v[r].second;
                    return 0;
                }
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}