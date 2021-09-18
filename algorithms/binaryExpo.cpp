#include<bits/stdc++.h>
using namespace std;


int power(int base,int n){
	int ans=1;
	while(n!=0){

		if(n%2){  //power n is odd
			ans=ans*base;
			n=n-1;
		}
		else{
			n=n/2;
			base=base*base;
		}
	}

	return ans;
}

int main(){
	int b,n;
	cin>>b>>n;
	cout<<power(b,n)<<endl;
}
