#include<bits/stdc++.h>
using namespace std;
//const int N=1e5+10;


int main(){
    
    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;

        string ans="No";
        map<char,int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }

        for(auto x:m){
            if(x.second>=2){
                ans="Yes";
            }
        }

        cout<<ans<<endl;


    }
    return 0;
}


