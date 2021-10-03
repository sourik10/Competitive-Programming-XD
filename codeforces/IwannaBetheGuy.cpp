#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   set<int>s;
   int a,x; cin>>a;
   for(int i=0;i<a;i++){
       cin>>x;
       s.insert(x);
   }
   int b,y; cin>>b;
   for(int i=0;i<b;i++){
       cin>>y;
       s.insert(y);
   }
   
   if(s.size()==n) cout<<"I become the guy."<<endl;
   else cout<<"Oh, my keyboard!"<<endl;
   
}
