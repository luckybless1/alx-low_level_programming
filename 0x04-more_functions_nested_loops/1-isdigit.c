#include "main.h"
/**
 * _isdigiit - check for a digit through 0 to 9
 * @c: input that is going to check
 * Return: 1 if @c is a digiy , otherwise 0
 **/
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
