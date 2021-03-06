// BasicMath.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Student.h"

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
void fillVector(vector<int>& newMyVector)
//vector need to pass by reference because vectors are really large in memmory  
{
	cout << "input the element of vector: ";
	int input;
	cin >> input;

	while (input != -1) {
		newMyVector.push_back(input);
		cin >> input;
	}cout << endl;
}

void printVector(const vector<int>& newmyvec)
//use const to save memory
{
	cout << "my new vector: ";
	for (unsigned int i(0); i < newmyvec.size(); i++) {
		cout << newmyvec[i] << " ";
	}
	cout << endl;
}


//vectors of object (class BMI)
void inputStudent(vector<Student>& newClass)
//vector need to pass by reference because vectors are really large in memmory  
{
	string studentName;
	char studentGrade;

	cout << "input the total number of students: ";
	int classSize;
	cin >> classSize;

	for (int i(0); i < classSize; i++) {
		cout << "student name: ";
		cin >> studentName;
		cout << "student grade: ";
		cin >> studentGrade;

		Student nStudent(studentName, studentGrade);
		newClass.push_back(nStudent);
	}
	cout << endl;
}

void printStudent(const vector<Student>& newClass) {

	for (int i(0); i < newClass.size(); i++) {
		cout << "student name: " << newClass[i].getName() <<
			" and having grade: " << newClass[i].getGrade();
		cout << endl;
	}
}


int main(int argc, char* argv[])
{
	cout << "Hello World!\n";
	
	
	//14/05/2019
	//====================================================
	vector<Student> myclass;

	inputStudent(myclass);
	printStudent(myclass);

	exit(1);

	vector<int> mynewvec;
	fillVector(mynewvec);
	printVector(mynewvec);
	exit(1);
	
	//vector<DataType> nameofVector

	vector<int> myVector;

	myVector.push_back(3);
	myVector.push_back(4);
	myVector.push_back(5);
	myVector.push_back(66);
	myVector.push_back(7);
	myVector.push_back(8);
	cout << "Previous vector: ";

	for (unsigned int i(0); i < myVector.size(); i++) {
		cout << myVector[i] << " ";
	}

	cout << endl;


	cout << "Later vector: ";
	myVector.insert(myVector.begin() + 5, 999);

	for (unsigned int i(0); i < myVector.size(); i++) {
		cout << myVector[i] << " ";
	}
	myVector.empty();

	cout << endl;

	//Vectors as parameters
	//vector need to pass by reference because vectors are really large in memmory  
	   	  
	exit(1);





	//    20/04/2019
	//--------------------------------------------------------------------------------------
	//no passing by reference from the function
	string name;
	int height;
	double weight;

	cout << "Enter your name: "; cin >> name;
	cout << "Enter your height (in cm): "; cin >> height;
	cout << "Enter your weight (in kg):"; cin >> weight;

	////create objects
	BMI student_1(name, height, weight); // to use the Overload constructor

	cout << endl << "Student_1 Name: " << student_1.getName() << endl <<
		"Heigh: " << student_1.getHeight() << endl <<
		"Weight: " << student_1.getWeight() << endl;


	cout << endl;
	cout << "Enter your name: "; cin >> name;
	cout << "Enter your height (in cm): "; cin >> height;
	cout << "Enter your weight (in kg):"; cin >> weight;

	BMI student_2; //automated uses Default constructor (initial variables)
	student_2.setName(name);
	student_2.setHeight(height);
	student_2.setWeight(weight);

	cout << endl << "Student Name2: " << student_2.getName() << endl <<
		"Heigh: " << student_2.getHeight() << endl <<
		"Weight: " << student_2.getWeight() << endl <<
		"BMI: " << student_2.calculateBMI() << endl;

	cout << endl << "Student 1 Name: " << student_1.getName() << endl;

	//each of member variables will hold the values that we give it
	//only for that one object
	//we're using a different object, student_2 has its own information
	//we can go back to other object (student_1) and access their information



	return 0;

}

