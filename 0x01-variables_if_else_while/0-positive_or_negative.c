#include <stdlib.h>
#include <time.h>
#include <stdio.h>


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
