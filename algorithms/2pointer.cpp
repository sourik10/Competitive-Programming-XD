#include<bits/stdc++.h>
using namespace std;

/* 
	Implementation of 2-pointer approach 
*/

void twoPointer(){


	//taking input for ar[]
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}

	int k;
	cin>>k;
	int sum=0,maxi=0;

	//sum of 1st subarray of size k
	for(int i=0;i<k;i++){
		sum=sum+ar[i];
	}

	maxi=sum;
	int l=0; 
	int r=k-1;

	while(r<=n-2){
		r++;
		sum=sum+ar[r];
		sum=sum-ar[l];
		l--;
		maxi=max(maxi,sum);
	}

	cout<<"maximum subarray sum of size k: "<<maxi<<endl;

}

