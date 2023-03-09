#include "main.h"
/**
 *_sqrt_recursion - returns the natural square root of number
 *@n: the number to calculate its square root
 *
 * @low: initial point set to 0
 * @high: equal to n
 *
 * Description: this function calls a helper function to perform a binary,
 * to find the square root of n.
 *
 * Return: thesquare root of a given number, or -1 if n is than 0
 *
 */
long sqrt_helper(long n, long low, long high);
int _sqrt_recursion(int n)
{
	/*checks n is valid input*/
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper((long)n, 0, (long)n));
}
/**
 * sqrt_helper - performs a binary search to find the square of root n
 * @n: the number to calculate its square root
 * @low: the initial point set to 0
 * @high: equal to n
 *
 * Return: square root of the given number, or -1 if low is greater than high
 */
long sqrt_helper(long n, long low, long high)
{
	int mid;

	if (low > high)
	{
		return (-1);
	}
	/*calculating mid-point*/
	mid = (low + high) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	/*search lower half if condition is true*/
	else if (mid * mid > n)
	{
		return (sqrt_helper(n, low, mid - 1));
	}
	/*searching the upper half if the above condition fails*/
	else
	{
	return (sqrt_helper(n, mid + 1, high));
	}
}
