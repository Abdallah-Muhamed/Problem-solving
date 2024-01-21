#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define tc int t;cin>>t;while(t--)
#define ll long long
#define all(a) a.begin(),a.end()
struct grades
{
    string name;
    int a,m,s,e;
    int sum;
};
bool comp(grades a, grades b) {
    if (a.sum != b.sum) {
        return a.sum > b.sum;
    } else {
        return a.name < b.name;
    }
}
int main() {
    FAST
            int n;cin>>n;
    grades x[n];
    for(int i=0;i<n;i++){
        cin>>x[i].name>>x[i].a>>x[i].m>>x[i].s>>x[i].e;
        x[i].sum=x[i].a+x[i].m+x[i].s+x[i].e;
    }
    sort(x,x+n,comp);
    for (int i = 0; i < n; i++) {
        cout<<x[i].name<<" "<<x[i].sum<<" "<<x[i].a<<" "<<x[i].m<<" "<<x[i].s<<" "<<x[i].e;
        cout<<"\n";
    }
    return 0;
}