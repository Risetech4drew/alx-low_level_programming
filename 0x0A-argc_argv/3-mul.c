#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argc: argument counter
 * @argv: argument vecter, a one dimensional array of srings
 *
 * Return: the product of two integer arguments
 */
int main(int argc, char *argv[])
{
	int factors;
	int i;
	int mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		factors = atoi(argv[i]);
		mul *= factors;
		i++;
	}
	printf("%d\n", mul);
	exit(EXIT_SUCCESS);
}
