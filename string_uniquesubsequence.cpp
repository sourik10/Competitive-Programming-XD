#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

    string s;

    while(t--){

        int n;

        int count=0;

        cin>>n;

       cin>>s;

        for(int i=0;i<n-1;i++){

              if(s[i]!=s[i+1])

                    count++;

        }

        cout<<count+1<<endl;

    }

}
