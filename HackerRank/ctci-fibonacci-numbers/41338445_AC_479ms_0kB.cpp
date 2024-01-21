#include <bits/stdc++.h>
using namespace std;
#define tc int t;cin>>t;while(t--)
#define ll long long
int solve (int n)
{
if(n==2||n==1)
    return 1;
else
{
    return solve(n-1)+solve(n-2);
}
}
int main() {
    int n;
    
     cin>>n;
        cout<<solve(n)<<'\n';
 
}