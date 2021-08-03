#include<bits/stdc++.h>
using namespace std;

bool perfect(int n){

	int sum=1;

	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			if(i*i!=n){
				sum=sum+i+(n/i); //checking square no or not
			}
			else {
				sum=sum+i;
			}
		}
	}

	if(sum==n and n!=1){
		return true;
	}
	else return false;

}

int main(){

	int n;
	cin>>n;


	for(int i=1;i<=n;i++){
		if(perfect(i)){
			cout<<i<<" is a perfect number"<<endl;
		}
	}

}
