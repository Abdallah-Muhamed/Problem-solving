#include <bits/stdc++.h>
using namespace std;
int main() {
   queue<int>q;
   int n;cin>>n;
   while(n--){
       int x,y;cin>>x>>y;
       if(x==1){
           q.push(y);
       }
       else{
           if(q.front()==y){
               cout<<"Yes\n";
           }
           else{
               cout<<"No\n";
           }
           q.pop();
       }
   }

    return 0;
}
