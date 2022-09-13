#include "main.h"
/**
 * main - prints _putchar,folloed by a new line
 *
 * Return:Always 0 (success)
 **/
int main(void)
{
	int i;
	char c[] ="_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');
	
	return (0);
}
