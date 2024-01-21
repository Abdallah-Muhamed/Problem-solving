#include <bits/stdc++.h>
using namespace std;
#define tc int t;cin>>t;while(t--)
#define ll long long
int solve (int n)
{
if(n==0)
    return 0;
else
{
    int k;
    cin>>k;
    return k+solve(n-1);
}
}
int main() {
    int t;cin>>t;
 for(int i=1;i<=t;i++) {
     int n;cin>>n;
        cout<<"Case "<<i<<": "<<solve(n)<<'\n';
 }
}