#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   getline(cin,s);
   set<char>m;
   for(int i=0;i<s.length();i++){
       if(s[i]>='a' and s[i]<='z') {
           m.insert(s[i]);
       }
   }
   cout<<m.size()<<endl;
}
