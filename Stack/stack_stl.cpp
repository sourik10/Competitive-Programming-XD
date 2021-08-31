#include<bits/stdc++.h>
using namespace std;



int main(){


	//stack stl for string datatype
	stack<string> stl;

	stl.push("abc");
	stl.push("def");
	stl.push("ghi");
	stl.push("jkl");
	stl.push("mno");

	//pop 
	stl.pop();

	while(!stl.empty()){
		cout<< stl.top() <<endl;
		stl.pop();
	}




	return 0;
}
