#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    vector<int>v;
    int l=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='+'){
            continue;
        }
        else{
            v.push_back(s[i]);
            l++;

        }
    }
    sort(v.begin(),v.end()); int i=0;
    for(char c:v){
        if(v.size()>1 and i<=v.size()-2){
        cout<<c<<'+';
        i++; }
        else cout<<c;
    }

}

    

