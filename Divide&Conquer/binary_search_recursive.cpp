#include <bits/stdc++.h>
using namespace std;



int binary_rec(vector<int>&a,int l,int r,int k){
    
    while(l<=r){
        int m=(l+r)/2;
        
        if(a[m]==k){
            return m;
        }
        if(a[m]>k){
            return binary_rec(a,l,m-1,k);
        }
        if(a[m]<k){
            return binary_rec(a,m+1,r,k);
        }
    }
    
    return -1;
}
  
int binarySearch(vector<int> v, int x)
{
    x=binary_rec(v,0,v.size()-1,x);
    
    return x;
    
}
