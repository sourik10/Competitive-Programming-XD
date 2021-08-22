//power function
int power(int a,int n){
	//base case
	if(n==0){
		return 1;
	}
	return a * power(a,n-1);
}


//power function ---faster
int fastPower(int a,int n){
	if(n==0){
		return 1;
	}

	int subProb = fastPower(a,n/2);
	int subProbSq = subProb*subProb;
	if(n&1){
		return a*subProbSq;
	}
	return subProbSq;
}



