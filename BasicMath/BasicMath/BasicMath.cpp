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

int main()
{
    cout << "Hello World!\n"; 
	float result = 0;
		mathtest(result);
	
	return 0;
}

