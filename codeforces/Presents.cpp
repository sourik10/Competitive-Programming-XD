#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,p;
   cin>>n;

   int f[n];
   for(int i=1;i<=n;i++){
    cin>>p;
    f[p]=i;
   }

   for(int i=1;i<=n;i++){
    cout<<f[i]<<" ";
   }

}
