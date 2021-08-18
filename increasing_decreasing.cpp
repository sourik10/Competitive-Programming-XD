#include<bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag){
    if(flag==1){
        sort(a.begin(),a.end());
    }
    else{
        sort(a.begin(),a.end(),greater<int>());   
    }
    
    return a;
    
}
