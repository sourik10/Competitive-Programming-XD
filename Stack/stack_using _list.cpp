#include<iostream>
#include "stack_ll.h"
using namespace std;



int main(){

	Stack<int> s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

  
  
  
//printing the Linked List
	while(!s.empty()){
		cout<< s.top() <<endl;
		s.pop();
	}




	return 0;
}
