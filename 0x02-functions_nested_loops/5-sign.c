#include "main.h"
/**
 * print_sign - Entry point
 *
 * description - Print the sign of a number
 *
 * Return: return 1 if n is posiitive, 0 if n is 0, -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
