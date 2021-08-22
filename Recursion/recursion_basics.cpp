#include<bits/stdc++.h>
using namespace std;



//factorial of a number
int fact(int n){
	//base case
	if(n==0){
		return 1;
	}
	//rec case
	int ans = n*fact(n-1);
	return ans;
}



//fibonacci series using recursion
int fib(int n){
	if(n==0 or n==1){
		return n;
	}
	int f1 = fib(n-1);
	int f2 = fib(n-2);
	return f1 + f2;
}


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





