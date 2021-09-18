#include<bits/stdc++.h>
using namespace std;
/*
Fermat Little Theorem--- It says if p is a prime number, then for any integer a, the number (a^p – a)  is an integer multiple of p. 
---->  a^p ≡ a (mod p)
Modular Arithmetic Formula
-----------------------------
(a+b) % mod = ((a % mod) + (b % mod)) %mod 
(a-b) % mod = ((a % mod) - (b % mod)) %mod 
(a*b) % mod = ((a % mod) * (b % mod)) %mod 
(a/b) % mod = ((a % mod) * (b^-1 % mod)) %mod 


(b/a) %mod  = ( b * a^(mod-2) ) % mod--------------->applying fermat little theorem

*/

long long power(int base,int n,int mod){
	long long ans=1;
	while(n!=0){

		if(n%2){  //power n is odd
			ans=(ans*base)% mod;
			n=n-1;
		}
		else{
			n=n/2;
			base=(base*base)% mod;
		}
	}

	return ans;
}

int main(){
	int a,b;
	int mod=1e9+7;
	cin>>a>>b;
	
	//int c=b/a
	int c=(b*power(a,mod-2,mod)) % mod;  //fermat little theorem
	
	//cout<<power(a,b,mod)<<endl;
}
