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

//alternative method
int Solution::numSetBits(unsigned int A) {
    //counting only numSetBits
    unsigned int count=0;
    while(A!=0){
      A=A&(A-1);
      count++; 
    }
    return count;
}

//no of trailing zeroes  10100 -->trailing zero= 2
int Solution::solve(int A) {
    int i;
    for(i=0;i<32;i++){
        if(A>>i & 1) break;
    }
    return i;
}


//count the number of set bits
	cout<<__builtin_popcount(n)<<endl;
	cout<<endl;


//revreseBits---32bits
unsigned int Solution::reverse(unsigned int A) {
    unsigned int B=0;
    for(int i=0;i<32;i++){
        int rightBit=A & 1;   //extracting the rightmost bit
        B=B<<1;     
        B=B | rightBit;
        A=A>>1;
    }
    return B;
}

