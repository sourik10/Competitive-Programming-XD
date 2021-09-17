/* 
Prefix Sum in 2D ARRAY
Given a two-dimensional array of size (N).
Cartesian coordinate are given P(a,b) and Q(c,d).Find the sum of elements b/w P and Q.
*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
int ar[N][N];
long long int pf[N][N];


int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){

            cin>>ar[i][j]; 
             pf[i][j]= ar[i][j] + pf[i-1][j]+ pf[i][j-1] - pf[i-1][j-1];
    }
}


    int t;
    cin>>t;
    while(t--){

        //co-ordinate for point P(a,b)
        int a,b;
        cin>>a>>b;

        //co-ordinate for point Q(c,d)
        int c,d;
        cin>>c>>d;

        cout<<pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1]<<endl;

    }


}
