/* 
Prefix Sum in 1D ARRAY
Given a one-dimensional array of size (N).Left and right index are given .find the sum of elements between L and R.

*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e5+9;
int a[N];
int pf[N];


int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a[i]; 

        pf[i]=pf[i-1]+a[i]; //cumulative frequency
    }

    int t;
    cin>>t;
    while(t--){

        int l_ind,r_ind;
        cin>>l_ind>>r_ind;

        cout<<pf[r_ind]-pf[l_ind-1]<<endl;

    }


}
