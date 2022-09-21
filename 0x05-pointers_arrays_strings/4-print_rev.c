#include "main.h"
/**
 * print_rev - a function to reverse a string
 * @s: string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int j;

	for (j = strlen(s) -1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
