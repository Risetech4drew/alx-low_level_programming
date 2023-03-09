#include "main.h"
int is_palindrome_helper(char *s, int start, int end);
int string_length(char *s);
/**
 * string_length - returns the length of the string
 * @s: the string to return its length
 *
 * Return: lenth of the string as an integer
 */
int string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		else
		{
			return (1 + string_length(s + 1));
		}
}
/**
 * is_palindrome_helper- recursive heler function to check if a string
 * is palindrome
 * @s: input string
 * @start: the index of the first character to compare
 * @end: index of the last character to compare
 *
 * Description: this function recursively  checks if substring of input
 * string s from start to end is palindrome. if the substring is
 * a palindrome, the function returns 1. otherwise, the function returns 0
 *
 *  Return: 1 if string is a palindrome and 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] == s[end])
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
	else
	{
	return (0);
	}
}
/**
 * is_palindrome - checks is string is palindrome
 *
 * @s: the input string
 *
 * Description: this function checks if the input string s is a palindrome. If
 * the string is palindrome, the function returns 1. otherwise,
 * the function returns 0. An empty string is considered a palindromei
 *
 *Return: 1 if string is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = string_length(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
