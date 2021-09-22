#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
	int t;
	cin>>t;
 
	int x,y,z;
	int r1=0,r2=0,r3=0;
	while(t--){
		cin>>x>>y>>z;
		r1+=x;
		r2+=y;
		r3+=z;
	}
 
	if(r1==0 and r2==0 and r3==0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
 
 
