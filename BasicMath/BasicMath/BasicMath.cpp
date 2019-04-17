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

int CalculateCycle(int iNo, int iCount){
	++iCount;
	if (iNo == 1){
		return iCount;
	}
	else{
		if (iNo % 2 == 0){
			iNo /= 2;
			iCount = CalculateCycle(iNo, iCount);
		}
		else{
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

	return 0;
}

