#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - check whether the generated number is zero, positive or negative
 *
 * Return: Always 0 (success)
 **/

int main(void)
{	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("%d you have a positive number \n" , n);
	}
	else if (n == 0)
	{
		printf("%d you have a zero number \n" , n);
	}
	else 
	{
		printf("%d you have a negative number \n" , n);
	}
	
	return (0);
