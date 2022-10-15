#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 after printing last digit
 */

int main(void)
{
	int n;
	int digit;

        srand(time(0));

	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
	{
	printf("last digit of %i is %i and is grater than 5", n, digit);
	}
	else if (digit == 0)
	{
	printf("last digit of %i is %i and is 0", n ,digit);
	}
	else if (digit < 6)
	{
	while ( digit != 0)
	{
printf("last digit of %i is %i and is less than 6 and no", n, digit);
	}
	}
	return (0);
}
