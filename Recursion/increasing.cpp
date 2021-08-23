#include<bits/stdc++.h>
using namespace std;

void func(int i,int n,vector<int> &v){
    if(i>n) return;
    else{
        v.push_back(i);
        func(i+1,n,v);
    }
}

vector<int> increasingNumbers(int N) {
   vector<int>out;
   func(1,N,out);
   
   return out;
}
