#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   getline(cin,s);

   int u=0,l=0;
   for(int i=0;i<s.length();i++){
    if(isupper(s[i])) u++;
    if(islower(s[i])) l++;
   }

   
    if(u>l){ char ch;
        for(int i=0;i<s.length();i++){
            ch=toupper(s[i]);
            cout<<ch;
        }
    }
    else{   char ch;
        for(int i=0;i<s.length();i++){
            ch=tolower(s[i]);
            cout<<ch;
        }

    }
}


