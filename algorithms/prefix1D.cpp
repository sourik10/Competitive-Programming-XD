/* 
Prefix Sum in 1D ARRAY----1 based indexing
Given a one-dimensional array of size (N).Left and right index are given .find the sum of elements between L and R.
*/

#include<bits/stdc++.h>
using namespace std;


//gloabally declared array
const int N=1e5+9;
int a[N];
int pf[N];


int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a[i]; 

        pf[i]=pf[i-1]+a[i]; 
    }

    int t;
    cin>>t;
    while(t--){

        int l,r;
        cin>>l>>r;

        cout<<pf[r]-pf[l-1]<<endl;

    }


}
