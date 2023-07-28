#include "main.h"

/**
 * _abs - returns the absolute value of a given digit
 * @number: number to be checked
 * Return: A positive number
 */
int _abs(int number)
{
	if (number < 0)
		return (-1 * number);
	else
		return (number);
}

/**
 * count_digits - function that counts the digits of a given number.
 * @number: input integer
 * Return: count of digits
 */
int count_digits(int number)
{
	int count = 0;
	int number_copy = number;

	if (number <= 0)
		count += 1;

	while (_abs(number_copy) != 0)
	{
		number_copy = number_copy / 10;
		count++;
	}
	return (count);
}
