#include<bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin>>y;


    int a,b,c,d;
    while(1){
        y=y+1; //increase by 1year y<=9000
        
        a=y/1000;
        b=(y/100)%10;
        c=(y/10)%10;
        d=y%10;

        if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d){
            break;
        }
    }
    cout<<y<<endl;


}


