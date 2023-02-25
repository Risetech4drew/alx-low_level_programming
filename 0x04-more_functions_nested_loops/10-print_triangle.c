#include "main.h"
/**
 * print_triangle - prints a mirrored triangle of # characters
 *
 * @size: is the size to triangle
 *
 * Description: If size is 0 or less, the function prints nly a newline character,
 * the function uses a while loop to print the triangle in a mirrored
 * fashion, with the apex at the left side of the screen and the base
 * at the right side of the screen.
 *
 * Return: void 
 */
void print_triangle(int size)
{
int i;

if (size < 0)
{
_putchar('\n');
return;
}
i = 1;
while (i <= size)
{
int j = 1;

while (j <= size - i)
{
_putchar(' ');
j++;
}
j = 1;
while (j <= i)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
