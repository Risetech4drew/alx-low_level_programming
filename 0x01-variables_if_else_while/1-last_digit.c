#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main -Entry
 *
 *this program prints the value of n and last digit and compares
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last_num;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;
	
	
	/* your code goes there */
	
	if (last_num < 6 && last_num != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	}
	else if (last_num > 5 && last_num != 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last_num);
	}
	return (0);
}
