#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define tc int t;cin>>t;while(t--)
#define all(v) (v).begin(), (v).end()
#define get(i,a,n) for (int (i) = 0; (i) < (n); ++(i)) {cin>>(a)[(i)];}
#define print(i,a,n) for (int (i) = 0; (i) < (n); ++(i)) {cout<<(a)[(i)]<<" ";}
#define ABDALLAH ios_base::sync_with_stdio(0); cin.tie(0);
int binary_search(vector<pair<int,int>>&v,pair<int,int>&x);
int lower(vector<pair<int,int>>&v,pair<int,int>&x);
int upper(vector<pair<int,int>>&v,pair<int,int>&x);
using namespace std;
int main() {
    ABDALLAH;

    int n,m;cin>>n>>m;
    vector<pair<int,int>>v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i].first;
        cin>>v[i].second;
    }
    while(m--){
        string s;cin>>s;
        pair<int,int>p;
        if(s=="lower"){
            cin>>p.first>>p.second;
            cout<<lower(v,p)<<"\n";
        }
        else if(s=="upper"){
            cin>>p.first>>p.second;
            cout<<upper(v,p)<<"\n";
        }
        else{
            cin>>p.first>>p.second;
            if(binary_search(v,p)==1)
                cout<<"found"<<"\n";
            else
                cout<<"not found"<<"\n";
        }
    }

    return 0;
}
int binary_search(vector<pair<int,int>>&v,pair<int,int>&x){
      int l=0,r=v.size()-1;
      while(l<=r){
          int mid=(l+r)/2;
          if(v[mid]==x){
              return 1;
          }
          else if(v[mid]>x){
                  r=mid-1;
              }
          else{
                  l=mid+1;
          }
      }
    return -1;
}
int lower(vector<pair<int,int>>&v,pair<int,int>&x){
      int l=0,r=v.size()-1,ans=-1;
      while(l<=r){
          int mid=(l+r)/2;
          if(v[mid]<x){
                  ans=mid;
                  l=mid+1;
          }
          else {
                  r=mid-1;
          }
      }
    return ans;
}

int upper(vector<pair<int,int>>&v,pair<int,int>&x){
      int l=0,r=v.size()-1,ans=-1;
      while(l<=r){
          int mid=(l+r)/2;
          if(v[mid]>x){
                  ans=mid;
                  r=mid-1;
          }
          else{
                  l=mid+1;
          }
      }
    return ans;
}