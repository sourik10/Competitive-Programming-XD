/*
SCANLINE ALGORITHM
An array of size n is given . ar={.......}
task is to add an key(x) in between its left and right index in (t) no of testcases and finally update the ar array.
*/

#include<bits/stdc++.h>
using namespace std;

void scanlineAlgorithm(){

	//size of array
	int n;
	cin>>n;

	//taking input for array
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}

	//prefix array of size [n+1]
	int prefix[n+1];
	int t;   //no of testcases
	cin>>t;

	while(t--){
		int l,r,x;
		cin>>l>>r>>x;    //left index,right index,value(x)
    
		prefix[l]+=x;
		prefix[r+1]-=x;

	}

	int sum=0;
	for(int i=0;i<n;i++){
		sum+=prefix[i];  
		ar[i]+=sum;     //updating original aray
	}
	
	
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	
}
