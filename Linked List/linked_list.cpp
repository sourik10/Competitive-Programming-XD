#include<bits/stdc++.h>
#include"list.h"
using namespace std;



int main(){

    LinkedList obj;

    obj.push_front(20);
    obj.push_back(30);
    obj.push_back(40);
    obj.push_front(10);

    obj.print();
    cout<<endl;
    
    

    int k;
    cin>>k;


    //initialising head pointer at beginning
    Node* head=obj.begin();

    
    if(obj.recursive_search(head,k)){
    	cout<<k<<" is present"<<endl;
    }
    else{
    	cout<<k<<" not present"<<endl;
    }

/*
    if(obj.search_data(k)){
    	cout<<k<<" is present"<<endl;
    }
    else{
    	cout<<k<<" not present"<<endl;
    }


*/







    return 0;


}

