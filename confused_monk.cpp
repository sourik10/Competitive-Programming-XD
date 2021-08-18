#include<bits/stdc++.h>
using namespace std;
const int N=1e9+7;


long long int modularExponentiation(int x,int n,int M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        
        return modularExponentiation((x*x)%M,n/2,M);
    else                            
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}


int GCD(int A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}

int main() {
    int n;
    cin>>n;
    int a[n];
    long long int f=1;
    long long int g=0;

    for(int i=0;i<n;i++){
        cin>>a[i];

        f=f*a[i]; 
        g=GCD(a[i],g); 
    }

cout<<modularExponentiation(f,g,N);

    
    
}
