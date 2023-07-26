#include "main.h"

/**
 * print_hex - prints an unsigned integer in hexadecimal
 * @n: The unsigned integer to print
 * Return: number of printed chars
 */
int print_hexa(unsigned int n)
{
    char hexa[12];
    int counter = 0;
    int i = 0;

    if (n == 0)
    {
        _putchar('0');
        return (1);
    }

    while (n != 0)
    {
        int rem = n % 16;

        if (rem < 10)
            hexa[i] = rem + '0';
        else
            hexa[i] = rem + 'a';
        n /= 16;
        i++;
    }
    while (i > 0)
    {
        i--;
        _putchar(hexa[i]);
        counter++;
    }
    return (counter);
}