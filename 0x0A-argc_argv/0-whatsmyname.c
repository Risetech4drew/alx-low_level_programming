#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints its name, followed by a new line
 *
 * @argc: argument counter
 * @argv: argument vector, a one dimensional array of strings
 *
 * Description: this main main function prints it file name
 *
 * Return: file name called by
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);
}
