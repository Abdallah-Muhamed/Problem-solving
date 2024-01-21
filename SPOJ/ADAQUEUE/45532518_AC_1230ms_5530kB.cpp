#include <bits/stdc++.h>
using namespace std;
int main() {
   deque<int>dq;
   int q;cin>>q;
   bool reverse=0;
   while(q--){

       string str;cin>>str;
       if(str=="toFront"){
           int n;cin>>n;
           if(reverse)dq.push_back(n);
           else dq.push_front(n);
       }
       else if(str=="push_back"){
           int n;cin>>n;
           if(reverse)dq.push_front(n);
           else dq.push_back(n);
       }
       else if(str=="reverse"){
           reverse^=1;
       }
       else if(str=="front"){
           if(dq.empty()){
               cout<<"No job for Ada?\n";
           }
           else if(reverse)cout<<dq.back()<<"\n",dq.pop_back();
           else cout<<dq.front()<<"\n",dq.pop_front();
       }
       else if(str=="back"){
           if(dq.empty()){
               cout<<"No job for Ada?\n";
           }
           else if(reverse)cout<<dq.front()<<"\n",dq.pop_front();
           else cout<<dq.back()<<"\n",dq.pop_back();
       }
   }
    return 0;

}