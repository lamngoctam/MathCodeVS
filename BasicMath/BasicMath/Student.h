#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student
{

public:
	//Default constructor
	//never use void() function in here => use name of class
	Student(); //no parameters

	//overload constructor
	//different way to call the same name of function
	Student(string, char); //with parameters

	//Destructor
	//when done or left the function of which object was created,
	//it need to be destroyed out of memmory
	~Student();

	//Accessor function
	//return member variables
	//its not going to be modifying any of member variables in private:
	string getName() const; //no parameters
		//getName - returns name of student
	char getGrade() const;




	//Mutator function
	//Allow to edit each of private member variables one at a time
	void setName(string); //to modify name
		//setName - sets name of student
	void setGrade(char); //to modify grade
		//setGrade - sets grade of student
	


private://can not modify from outside of class (e.g. in main func)
	//member variables
	string newName;
	char newGrade;
	

};

