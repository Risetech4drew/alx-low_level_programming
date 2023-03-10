#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the arguments it receives
 *
 * @argc: argument counter
 * argv: pointer to an array of arguments
 *
 * Return: arguments passed to it
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
