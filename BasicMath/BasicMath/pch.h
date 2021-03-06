// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
#include <string>

using namespace std;

#ifndef PCH_H
#define PCH_H

// TODO: add headers that you want to pre-compile here
class BMI {
public:
	//Default constructor
	//never use void() function in here => use name of class
	BMI(); //no parameters

	//overload constructor
	//different way to call the same name of function
	BMI(string, int, double); //with parameters

	//Destructor
	//when done or left the function of which object was created,
	//it need to be destroyed out of memmory
	~BMI();

	//Accessor function
	//return member variables
	//its not going to be modifying any of member variables in private:
	string getName() const; //no parameters
		//getName - returns name of patient
	int getHeight() const;
	double getWeight() const;
		
	//Mutator function
	//Allow to edit each of private member variables one at a time
	void setName(string); //to modify name
		//setName - sets name of patient
	void setHeight(int); //to modify name
		//setHeigh - sets name of patient
	void setWeight(double); //to modify name
			//setWeigh - sets name of patient
	double calculateBMI();
		//calculate BMI of patient
		//@return double



private://can not modify from outside of class (e.g. in main func)
	//member variables
	string newName;
	int newHeight;
	double newWeight;

};


#endif //PCH_H
