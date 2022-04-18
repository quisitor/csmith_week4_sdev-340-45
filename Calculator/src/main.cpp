/***************************************************************************
 * \file   main.cpp
 * \brief  Implementation file to demonstrate the Calculator Template
 * \brief  Class SDEV-340-45
 * \brief  Assignment - User Defined Templates
 * \author Craig Smith
 * \date   April 2022
 *****************************************************************************/
#pragma once

#include<iostream>
#include<string>
#include "mathTemplates.h"
using namespace std;

int main() {

	calc::INTEGER firstInteger = 9;
	calc::INTEGER secondInteger = 3;
	calc::FLOAT firstFloat = 9.2f;
	calc::FLOAT secondFloat = 3.5f;
	calc::DOUBLE firstDouble = 9.6;
	calc::DOUBLE secondDouble = 3.1;
	calc::BINARY_STRING firstBinary = "00000101";
	calc::BINARY_STRING secondBinary = "00000010";
	
	calc::Calculator<calc::BINARY_STRING> calculation { firstBinary, secondBinary };
	cout << "Binary Strings\n--------------\n";
	cout << firstBinary << " + " << secondBinary << " = ";
	cout << calculation.add_BINARY_STRINGS() << endl;;
	cout << firstBinary << " - " << secondBinary << " = ";
	cout << calculation.subtract_BINARY_STRINGS() << endl;;
	cout << firstBinary << " * " << secondBinary << " = ";
	cout << calculation.multiply_BINARY_STRINGS() << endl;;
	cout << firstBinary << " / " << secondBinary << " = ";
	cout << calculation.divide_BINARY_STRINGS() << endl << endl;;

	calc::Calculator<int> intCalculation{ firstInteger, secondInteger };
	cout << "Integers\n--------------\n";
	cout << firstInteger << " + " << secondInteger << " = ";
	cout << intCalculation.add() << endl;
	cout << firstInteger << " - " << secondInteger << " = ";
	cout << intCalculation.subtract() << endl;
	cout << firstInteger << " * " << secondInteger << " = ";
	cout << intCalculation.multiply() << endl;
	cout << firstInteger << " / " << secondInteger << " = ";
	cout << intCalculation.divide() << endl << endl;;

	calc::Calculator<float> floatCalculation{ firstFloat, secondFloat };
	cout << "Floats\n--------------\n";
	cout << firstFloat << " + " << secondFloat << " = ";
	cout << floatCalculation.add() << endl;
	cout << firstFloat << " - " << secondFloat << " = ";
	cout << floatCalculation.subtract() << endl;
	cout << firstFloat << " * " << secondFloat << " = ";
	cout << floatCalculation.multiply() << endl;
	cout << firstFloat << " / " << secondFloat << " = ";
	cout << floatCalculation.divide() << endl << endl;

	calc::Calculator<double> doubleCalculation{ firstDouble, secondDouble };
	cout << "Doubles\n--------------\n";
	cout << firstDouble << " + " << secondDouble << " = ";
	cout << doubleCalculation.add() << endl;
	cout << firstDouble << " - " << secondDouble << " = ";
	cout << doubleCalculation.subtract() << endl;
	cout << firstDouble << " * " << secondDouble << " = ";
	cout << doubleCalculation.multiply() << endl;
	cout << firstDouble << " / " << secondDouble << " = ";
	cout << doubleCalculation.divide() << endl << endl;

	return 0;
}

