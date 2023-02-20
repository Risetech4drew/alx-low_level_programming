#include<stdio.h>
/**
 * main - Entry
 *
 * This program prints all the possible combination of numbers.
 *
 *Return: Always 0 (Success)
 */
int main() {
    int i = 0, j = 1;

    while (i < 9) {
        while (j < 10) {
            putchar(i + '0');
            putchar(j + '0');

            if (i < 8) {
                putchar(',');
                putchar(' ');
            }

            j++;
        }

        i++;
        j = i + 1;
    }

    return 0;
}
