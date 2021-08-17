#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int a=0;
        int r;
        while(n){
            r=n%10;
            a=(a*10)+r;
            n=n/10;
        }
        cout<<a<<endl;
    }
}
