#include <iostream>
using namespace std;
int smallest(int x, int y, int z){
  return x < y ? (x < z ? x : z) : (y < z ? y : z);
}

int main() {
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int z=k*l;
    int y=c*d;
    int x=p/np;
    int ans=smallest(z,y,x);
    cout<<ans/n;
}
