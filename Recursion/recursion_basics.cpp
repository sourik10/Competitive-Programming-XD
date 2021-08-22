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


