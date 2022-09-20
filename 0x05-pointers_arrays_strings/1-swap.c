#include "main.h"
/**
 * swap_int - function to swap to integer
 * @a: first input to swap
 * @b:second input swap
 * Return: void
 **/
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
