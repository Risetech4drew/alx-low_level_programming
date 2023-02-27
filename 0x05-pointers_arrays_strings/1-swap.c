#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: the integer to be swapped
 * @b: the integer to be swapped
 *
 * Description: this function swaps the values of two integers at "a" and "b",
 * the value of "a" is swapped with value of "b" vice versa
 *
 * Return: swapped values of "a" and "b"
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
