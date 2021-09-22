#include<bits/stdc++.h>
using namespace std;

void primeFactor(int n){
  for(int i=2;i*i<=n;i++){
    while(n%i==0){
      cout<<i<<" ";
      n=n/i;
    }
  }
  if(n>=2) cout<<n<<end;
}

    
