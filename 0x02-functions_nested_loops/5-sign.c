#include "main.h"
/**
 * print_sign - prints the sign og a number
 * @n: input
 * Return: 1 if n is positive, o if n is zero and -1 otherwise
 **/
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
