#include <iostream>
#include <string>
using namespace std;
 
int binaryToDecimal(string s)
{
  int d=0;
  int n=s.length()-1;
  int b=1;
  
  for(int i=n;i>=0;i--){
      if(s[i]=='1'){
          d=d+b;
      }
      b*=2;
  }
  
  return d;
}
 
