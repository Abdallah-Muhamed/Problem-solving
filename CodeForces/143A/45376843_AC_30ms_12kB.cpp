#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);;;
#define tc int t;cin >> t;while (t--)
#define ll long long
using namespace std;
int main() {
    FAST
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        for(int i=1;i<10;i++){
        for(int j=1;j<10;j++){
            if(j == i) continue;
            for(int k=1;k<10;k++){
                if(k == i || k == j) continue;
                for(int l=1;l<10;l++){
                    if(l == i || l == j || l == k) continue;
                    if(i+j == a && k+l == b && i+k == c && j+l == d && i+l == e && j+k == f){
                        cout << i << " " << j << "\n" << k << " " << l;
                        return 0;
                    }
                }
            }
        }
}
        cout << -1;
}
