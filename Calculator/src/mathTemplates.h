/***************************************************************************
 * \file   mathTemplates.h
 * \brief  Hearder file that defines a template to perform basic arithmatic  
 * \brief  Class SDEV-340-45
 * \brief  Assignment - User Defined Templates
 * \author Craig Smith
 * \date   April 2022
 *****************************************************************************/
#pragma once

#include<iostream>
#include<bitset>
#include<string>

namespace calc {

	/* For use with T add(), T subtract(), T multiply(), T divide() */
	typedef int INTEGER;                 
	typedef float FLOAT;	
	typedef double DOUBLE;

	/* For use with T add_BINDARY_STRINGS(), T subtract_BINARY_STRINGS(), 
	   T multiply_BINARY_STRINGS(), T divide_BINDARY_STRINGS() */
	typedef std::string BINARY_STRING;

template<typename T>
class Calculator {

public:
	Calculator(T firstValue, T secondValue);
	T add_BINARY_STRINGS();
	T subtract_BINARY_STRINGS();
	T multiply_BINARY_STRINGS();
	T divide_BINARY_STRINGS();
	T add();
	T subtract();
	T multiply();
	T divide();

private:
	T _firstValue;
	T _secondValue;
};

template<typename T>
inline Calculator<T>::Calculator(T firstValue, T secondValue)
{
	_firstValue = firstValue;
	_secondValue = secondValue;
}

template<typename T>
inline T Calculator<T>::add_BINARY_STRINGS()
{
	unsigned long firstNumber = std::stoul(_firstValue, 0, 2); 
	unsigned long secondNumber = std::stoul(_secondValue, 0, 2); 
	unsigned long sum = firstNumber + secondNumber;
	std::bitset<16> bs(sum);
	return bs.to_string();
}

template<typename T>
inline T Calculator<T>::subtract_BINARY_STRINGS()
{
	unsigned long firstNumber = std::stoul(_firstValue, 0, 2);
	unsigned long secondNumber = std::stoul(_secondValue, 0, 2);
	unsigned long sum = firstNumber - secondNumber;
	std::bitset<16> bs(sum);
	return bs.to_string();
}

template<typename T>
inline T Calculator<T>::multiply_BINARY_STRINGS()
{
	unsigned long firstNumber = std::stoul(_firstValue, 0, 2);
	unsigned long secondNumber = std::stoul(_secondValue, 0, 2);
	unsigned long sum = firstNumber * secondNumber;
	std::bitset<16> bs(sum);
	return bs.to_string();
}

template<typename T>
inline T Calculator<T>::divide_BINARY_STRINGS()
{
	unsigned long firstNumber = std::stoul(_firstValue, 0, 2);
	unsigned long secondNumber = std::stoul(_secondValue, 0, 2);
	unsigned long sum = firstNumber / secondNumber;
	unsigned long remainder = firstNumber % secondNumber;
	std::bitset<16> sumBS(sum);
	std::bitset<16> remainderBS(remainder);
	return sumBS.to_string() + " Remainder " + remainderBS.to_string();
}

template<typename T>
inline T Calculator<T>::add()
{
	return _firstValue + _secondValue;
}

template<typename T>
inline T Calculator<T>::subtract()
{
	return _firstValue - _secondValue;
}

template<typename T>
inline T Calculator<T>::multiply()
{
	return _firstValue * _secondValue;
}

template<typename T>
inline T Calculator<T>::divide()
{
	return _firstValue / _secondValue;
}

}