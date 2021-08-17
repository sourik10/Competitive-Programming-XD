
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




//optimised way 
#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	//odd number check
	if(n&1){
		cout<<"0"<<endl;
		return 0;
	}

	if(n%4!=0){
		cout<<n/4<<endl;
	}
	else{
		cout<<(n/4)-1<<endl;
	}

}


 
