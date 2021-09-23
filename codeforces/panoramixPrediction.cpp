#include <iostream>
using namespace std;
/*
bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i<=n-1;i++){
        if(n%i==0) return false;
    }

    return true;
}
*/
int prime[20]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
int h=0;

int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<15;i++){
        if(n==prime[i] and m==prime[i+1]){
            h++;
        }
    }

    if(h==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


}
