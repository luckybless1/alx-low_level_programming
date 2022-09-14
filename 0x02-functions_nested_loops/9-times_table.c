#include "main.h"
/**
 * times_table - prints the 9 times table from 0
 * Return: Always 0 (success)
 **/
void times_table(void)
{

	int n = 0;
	int j ;
	int i;

	while (n < 10)
	{
		j = 0;
		while (j < 10)
		{
			i = n * j;
			if (i > 9)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(i + '0');
			}
			else
			{
				_putchar(i + '0');
			}
			if (j != 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		n++;
	}
