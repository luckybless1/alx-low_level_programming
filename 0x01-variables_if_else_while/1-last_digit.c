#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*main - entry point
 * main print the last digit of the generated random number
 *
 * Retrun :Always 0 success
 * */
int main(void)
{
	int n;
	int lastDigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) == 0)
		printf("last digit of %d is %d and is 0\n" n, n % 10);
	else if ((n % 10) >5)
		printf("last digit of %d is %d and is greater than 5\n" n,n %10);
	lastDigit =(n %10);
	printf("lastdigit of %d is %d "n lastDigit);

	if (lastDigit > 5)
		printf("this is greater than 5\n");
	else if (lastDigit == 0)
		printf("this is 0\n");
	else
		printf("last digit of %d is %d and is less than t and not 0\n",n,n%10);
		printf("and is less than 6 and not 0\n");
	
