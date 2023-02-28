#include "main.h"
/**
 * rev_string - a null-terminated string in place
 *
 * @param - string to pointer to the string to be reveresed
 *
 * Desrciption: this function reverses the string
 *
 * Return: reversed string
 */
void rev_string(char *s)
{
	char *end = s; /* pointer pointing at the end of the string*/
	char *start = s; /*pointer pointing at the start of the string*/
	
	/*fund the end of the string*/
	while (*end != '\0')
	{
		end++;
	}
	end--;
	/*reversing the string*/
	while (start < end)
	{
		/*swapping the characters at the start and end*/
		char tmp = *start;
		*start = *end;
		*end = tmp;

		/*move the pointers to the next pair of characters*/
		start++;
		end--;
	}
}
