#include "main.h"
/**
 * print_rev - a function to reverse a string
 * @s: string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int begin = 0;
	int end = 0;
	int count = 0;

	while (s[count] != '0')
		count++;
	end = count - 1;
	
	for (begin = 0; begin < count; begin++)
		__purchar(s[count]);
	_putchar('\n');
}
