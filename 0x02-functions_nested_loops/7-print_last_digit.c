#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: int type number
 * Return: returns value of the last digit
 **/
int print_last_digit(int n)
{
	int nt;

	if (n < 0)
	{
		nt = -1 * (n % 10);
		_putchar(nt + '0');
		return (nt);
	}
	else
	{
		nt = n % 10;
		_putchar(nt + '0');
		return (nt);
	}
}
