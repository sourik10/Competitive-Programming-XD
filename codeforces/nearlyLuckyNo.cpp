#include<bits/stdc++.h>
using namespace std;

int main(){
   long long int n;
   cin>>n;
   int count=0;

   while(n){
    if(n%10==4 or n%10==7) count++;
    n/=10;
   }

   if(count==4 or count==7){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
   
}


