#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: is the sctring to be reversed
 *
 * Desrciption: this function reverses the string
 *
 * Retur: reversed string
 */
void rev_string(char *s)
{
	char *z = s; /* end*/
	char *a = s; /*start*/

	while (*z)
	{
		z++;
	}
	z--;
	/*swapping process*/
	while (a < z)
	{	char tmp = *a;
		*a = *zi;
		*z = tmp;
		a++;
		z--;
	}
}
