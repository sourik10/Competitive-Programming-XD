#include<bits/stdc++.h>
using namespace std;

/* 
	Implementation of binary search Algorithm 
	time= O(log n)

*/

void binarySearch(){

	//taking input for ar[]
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}

	int low=0,high=n-1;
	int flag=-1; 	//x not found in ar[]
	while(low<=high){

		int mid=(l+h)/2;
		if(ar[mid]==x){
			flag=mid;
			break;
		}

		else if(ar[mid]<x){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	cout<<flag;
}
