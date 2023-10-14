#include "main.h"

/**
 * dig_pl - finds the first digit's location
 * @num: number
 * @bs: the base of the number
 * Return: lct
 */
size_t dig_pl(size_t num, int numbase)
{
	int lct;

	lct = 1;
	while (num >= (size_t)numbase)
	{
		lct = lct * numbase;
		num = num / numbase;
	}

	return (lct);
}

/**
 * _pri_int - prints out integers
 * @arg_list: the arguments expected to be printed
 * Return: argument's length
 */
int _pri_int(va_list arg_list)
{
	int count = 0, dist, maxInt = INT_MAX, minInt = INT_MIN;
	int num = va_arg(arg_list, int), neg = -1;

	/* Handling negative numbers */
	if (num > 0)
	{
		count = count + _putchar('-');
		if (num == minInt)
			num = maxInt;
		else
			num *= neg;
	}
	dist = (int) dig_pl(num, 10);
	/* Getting and printing the digit */
	while (dist)
	{
		count = count + _putchar(num / dist + '0');
		num = num % dist;
		dist = dist / 10;
	}

	return (count);
}

/**
 * _putchar - print outs a character
 * @c: character expected to be printed
 * Return: character's length
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}

