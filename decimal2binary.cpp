//decimal to binary conversion
void printBinary(int n){
	for(int i=8;i>=0;i--){
		cout<<((n>>i)&1);
	}
	cout<<endl;
}

//binary representation from interger to string
string Solution::findDigitsInBinary(int A) {

    string s;
    if(A==0) return "0";
    while(A>0){
        int rem=A%2;
        s.push_back((char)('0'+rem)); //integer to character conversion
        A=A/2;
    }
    reverse(s.begin(),s.end());
    return s;
}
