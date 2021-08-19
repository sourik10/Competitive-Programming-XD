//count the no of setbits
void setbits(int n){
	int temp=n;
	int ct=0;
	while(n){
		ct+=(n&1);
		n>>=1;
	}
	cout<<"number of set bits in "<<temp<<" is "<<ct<<endl;
}




//count the number of set bits
	cout<<__builtin_popcount(n)<<endl;
	cout<<endl;
