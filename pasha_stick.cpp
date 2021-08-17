
//brute force
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int count=0;
	for(long long int x=1;x<(n/2);x++) {
		for(long long int y=x;y<n/2;y++){
			if(x+y==(n/2) && x!=y) count++;
		}
	}
	cout<<count<<endl;
	return 0;
	
}
 
