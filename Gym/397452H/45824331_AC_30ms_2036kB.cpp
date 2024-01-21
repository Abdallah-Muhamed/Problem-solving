#include <bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(0); cin.tie(0);
//#define int long long
using namespace std;
int const N=2e5+7;
int freq[N];
signed main() {
    Fast;
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt,ans=0;
    for(int i=0;i<n;i++)
    {
        cnt=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<=arr[j-1])
                cnt++;
            else
                break;
        }

        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]<=arr[j+1])
                cnt++;
            else
                break;
        }
        ans=max(ans,cnt);
    }

    cout<<ans;
    return 0;
}
