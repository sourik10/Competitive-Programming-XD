//decimal to binary conversion
void printBinary(int n){
	for(int i=8;i>=0;i--){
		cout<<((n>>i)&1);
	}
	cout<<endl;
}
