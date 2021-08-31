#include<bits/stdc++.h>
using namespace std;


//insert at bottom

void insert_bottom(stack<int> &s,int d){

	//base case
	if(s.empty()){
		s.push(d);
		return;
	}

	int temp=s.top();
	s.pop();

	insert_bottom(s,d);
	s.push(temp);
}

//recursively revrse a LIST
void reverse(stack<int> &s){

	if(s.empty()){
		return;
	}

	int t = s.top();
	s.pop();
	reverse(s);
	insertAtBottom(s,t);
}




int main(){


	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);


	

	insert_bottom(s,10);
	
	
	reverse(s);


	while(!s.empty()){
		cout<< s.top() <<endl;
		s.pop();
	}





return 0;

}
