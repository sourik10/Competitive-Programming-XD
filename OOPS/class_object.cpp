/* OOPS 

(Object Oriented Programming)
Class = Blueprint of an obejct(logical entity)
Object= Instance of a class(physical entity)

Access Modifier(public/private/protected)
by default, it is private...


Constructor---
1-Copy constructor
2-Parameterised constructor
3-Copy constructor

Setter & Gettter function-----to access private data members and functions outside the class


~Destructor


Deep vs Shallow copy
In general, if the variables of an object have been dynamically allocated then it is required to do a Deep Copy in order to create a copy of the object.



Copy assignment operator 


*/



#include<bits/stdc++.h>
using namespace std;


//class implementation
class dept_cse{

private:                //by default data members are private...
	int roll;
	char name[10];
	int marks_eng;
	int marks_beng;



public:


	
//setter function()
	void set_roll(int r){
		roll=r;
	}

	void set_eng(int eng){
		marks_eng=eng;
	}


//getter function()
	int get_roll(){
		return roll;
	}

	int get_eng(){
		return marks_eng;
	}



	//default constructor 
	dept_cse(){

		cout<<"default constructor"<<endl;
		cout<<"---------------"<<endl;

	}


	//parameterised constructor
	dept_cse(int roll,char *n,int marks_eng,int marks_beng){

		cout<<"parameterised constructor"<<endl;
		

		this->roll=roll;
		this->marks_eng=marks_eng;
		this->marks_beng=marks_beng;

		strcpy(name,n);
	}


	//copy constructor
	dept_cse(dept_cse &x){

		cout<<"copy constructor"<<endl;

		roll=x.roll;
		strcpy(name,x.name);
		marks_eng=x.marks_eng;
		marks_beng=x.marks_beng;
		
		
	}


	void showdetails(){
		cout<<"roll: "<<roll<<endl;
		cout<<"name: "<<name<<endl;
		cout<<"marks_english: "<<marks_eng<<endl;
		cout<<"marks_bengali: "<<marks_beng<<endl;
		
		cout<<"-------------"<<endl;

	}




};


int main(){


	
	//parameterised constructor
	dept_cse obj1(30,"ramesh",80,90);
	obj1.showdetails();



	//defaultconstructor
	dept_cse obj2;
	



	//copy constructor
	dept_cse obj3(obj1);
	obj3.showdetails();




	/*
//private data members(roll ,eng marks) accesed using setter and getter function
	dept_cse obj;
	obj.set_roll(20);
	obj.set_eng(95);

	

	cout<<"roll: "<<obj.get_roll()<<endl;
	cout<<"eng marks: "<<obj.get_eng()<<endl;

	

*/




}


