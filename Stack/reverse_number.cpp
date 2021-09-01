#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
	
	int p=n;
	stack<int>s;
	
	while(p!=0){
	    s.push(p%10);
	    p=p/10;
	}
	
    int r=0;
    int i=1;
    
    while(!s.empty()){ 
        r=r+(s.top()*i);
        s.pop();
        
        i=i*10;
    }
    
    return r;
        
}
