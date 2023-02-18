#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main -Entry
 *
 * this program prints the string Last digit of 629438752 is 2 and is less than 6 and not 0
 * if the n < 6
 * and Last digit of 491506926 is 6 and is greater than 5 if last digit of n is > 5
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	else if (last_digit > 5 && last_digit != 0)
	{
		printf("Last digit of %d is %d and greater than 5 and not 0\n", n, last_digit);
	}
	else 
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	return (0);
}
