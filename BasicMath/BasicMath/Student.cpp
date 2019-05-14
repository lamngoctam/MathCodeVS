#include "Student.h"



Student::Student()
{
	newGrade = ' ';
}


Student::~Student()
{

}


Student::Student(string name, char grade) {
	newName = name;
	newGrade = grade;
}

string Student::getName() const //no parameters
//getName - returns name of student
{
	return newName;
}

char Student::getGrade() const {

	return newGrade;
}

void Student::setName(string name) //to modify name
		//setName - sets name of student
{
	newName = name;
}
void Student::setGrade(char grade) //to modify grade
	//setGrade - sets grade of student
{
	newGrade = grade;
}
