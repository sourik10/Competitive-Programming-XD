
/* Implementation of SieveErastothene----prime number n/w 1 to n
  time complexity O(n*log(n))
 */

#include<bits/stdc++.h>
using namespace std;
//const int N= 1e5+10;


void sieveErastothene(int N){

	bool sieve[N+1];
	//step1 : mark from index 2 to last index as true(prime)
	for(int i=2;i*i<=N;i++){
		sieve[i]=true;
	}

	//step2: mark multiple for i as false(non-prime)-->sieve[i]=false
	for(int i=2;i*i<=N;i++){
		if(sieve[i]==true){
			for(int j=i*i;j<=N;j+i){
				sieve[i]=false;
			}
		}
	}

	//print only the primes
	for (int i=2;i<=N;i++)
        if (sieve[i])
            cout <<i<< " ";

}

int main(){

	int n;
	cin>>n;
	sieveErastothene(n);
	
}
