#include <iostream>
using namespace std;
int digits(int p){
    int c(0);
    while(p){
        p=p/10;
        c++;
    }
    return c;
}
 
int main() {
    int n,k,p=0;
    cin>>n>>k;
    
    long long ar[n];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
        int q=digits(ar[i]);
        if(q<=k) p++;
        
    }
    cout<<p<<endl;
    
}
