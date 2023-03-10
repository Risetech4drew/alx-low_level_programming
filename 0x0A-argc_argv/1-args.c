#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the number of arguments passed
 *
 * @argc: argument counter
 * @argv: argumnet vector 
 *
 * Return: number of argumnets
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
