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
	int lst_num;
	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if (lst_num < 6 && lst_num != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_num);
	}
	else if (lst_num > 5 && lst_num != 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_num);
	}
	else 
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_num);
	}
	return (0);
}
