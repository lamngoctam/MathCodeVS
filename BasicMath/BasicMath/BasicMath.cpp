// BasicMath.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

void mathtest(float result) {
	float num = 16;
	result = sqrt(num);
	cout << result << endl;
}

int CalculateCycle(int iNo, int iCount) {
	++iCount;
	if (iNo == 1) {
		return iCount;
	}
	else {
		if (iNo % 2 == 0) {
			iNo /= 2;
			iCount = CalculateCycle(iNo, iCount);
		}
		else {
			iNo = iNo * 3 + 1;
			iCount = CalculateCycle(iNo, iCount);
		}
	}
	return iCount;
}

int main(int argc, char* argv[])
{
	cout << "Hello World!\n";
	float result = 0;
	mathtest(result);

	const int iNo = 22;
	cout << "Cycle length of " << iNo << " is = " << CalculateCycle(iNo, 0) << endl;

	//--------------------------
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
		"BMI: "<<student_2.calculateBMI() <<endl;

	cout << endl << "Student 1 Name: " << student_1.getName() << endl;

	//each of member variables will hold the values that we give it
	//only for that one object
	//we're using a different object, student_2 has its own information
	//we can go back to other object (student_1) and access their information



	return 0;

}

