#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,r;
    getline(cin,s);

    for(int i=0;i<s.length();i++){

        if(s[i]=='.'){
            r+='0';
        }
        if(s[i]=='-' and s[i+1]=='.'){
            r+='1';
            i++;
        }
        if(s[i]=='-' and s[i+1]=='-'){
            r+='2';
            i++;
        }
    }
    cout<<r<<endl;

}


