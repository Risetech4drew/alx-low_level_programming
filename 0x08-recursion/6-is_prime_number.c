#include "main.h"
int is_prime(int n, int i);
/**
 * is_prime_number - returns 1 if n is prime number otherwise return 0
 *
 * @n: the integer to be checked if is prime or not
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
/**
 * is_prime - returns 1 if n is prime number
 *
 * @n: integer to be checked if it is a prime number or not
 * @i: the current integer checked if divisible with n
 *
 * Return: 1 if n is not divisible by any integer between 2 and sqrt of n
 */
int is_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime(n, i + 1));
}
