#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int a=0;
        while(n){
            a=a+(n%10);
            n=n/10;
        }
        cout<<a<<endl;
    }
}
