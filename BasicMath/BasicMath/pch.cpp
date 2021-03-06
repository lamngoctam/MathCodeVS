// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed

#include "pch.h"
//how can we access the function inside the class???
//

// Default constructor
BMI::BMI() {
	newHeight = 0;
	//newName = "kyo";
	newWeight = 0.0;

}

//overload constructor
//should make corresponding variables
BMI::BMI(string name, int height, double weight) {
	//access the variables

	newName = name;
	newHeight = height;
	newWeight = weight;
}


//Destructor
//when done or left the function of which object was created,
//it need to be destroyed out of memmory
BMI::~BMI() {
}

//Accessor function
//use data type before the name of function
string BMI::getName() const {
	return newName;
}

int BMI::getHeight() const {
	return newHeight;
}
double BMI::getWeight() const {
	return newWeight;
}


//Mutator function
	//Allow to edit each of private member variables one at a time
void BMI::setName(string name) {
	newName = name;
}

void BMI::setHeight(int heigh) {
	newHeight = heigh;
}
		
void BMI::setWeight(double weigh) {
	newWeight = weigh;
}

double BMI::calculateBMI() {
	return ((newWeight * 703) / (newHeight*newHeight));

}