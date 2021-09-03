#include<bits/stdc++.h>

using namespace std;


 

int main(){


 

string s;

getline(cin,s);

int h[256]={0};

for(int i=0;i<s.length();i++){

  h[s[i]]++;

}

int count=h[0],str=0;

for(int i=1;i<256;i++){

  if(h[i]>count){

    count=h[i];

    str=i;

  }

}

char c=(char)str;

cout<<c<<" "<<count;


 

  return 0;

}
