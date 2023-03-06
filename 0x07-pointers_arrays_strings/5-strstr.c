#include "main.h"
#define NULL 0
/**
 * _strstr - locates substring
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Description: the function locates the first occurrence of the,
 * substring needle in the string haystack. the terminating null bytes (\0)
 * are not compared
 *
 * Return: a [pointer to the start of the located substring, or NULL if,
 * the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr1 = haystack;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*ptr1 != '\0')
	{
		char *ptr2 = needle;
		char *ptr3 = ptr1;

		while (*ptr2 != '\0' && *ptr3 == *ptr2)
		{
			ptr3++;
			ptr2++;
		}
		if (*ptr2 == '\0')
		{
			return (ptr1);
		}
		ptr1++;
	}
	return (NULL);
}
