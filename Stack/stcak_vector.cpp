#include<bits/stdc++.h>
#include "stack_vector.h"
using namespace std;



int main(){


	//classname <datatype> objectname;
	Stack<int> s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);


	while(!s.empty()){
		cout<< s.top() <<endl;
		s.pop();
	}




	return 0;
}
