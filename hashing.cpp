#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int hash[N];


int main(){

	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
		hash[a[i]]++;
	}


	int t;
	cin>>t;
	while(t--){
		int m;
		cin>>m;
		cout<<hash[m]<<endl;
		
	}

}
