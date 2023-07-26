#include "main.h"

/**
 * print_heXa - print an unsidgned integer in heXa format
 * @n: The unsigned integer to be print
 * Return: The Number of characters printed
 */

int print_heXa(unsigned int n)
{
        char hex[12];
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

		if (rem < 16)
                	hex[i] = rem + '0';
		else
			hex[i] = rem + 'A';
                n /= 16;
                i++;
        }

        while (i > 0)
        {
                i--;
                _putchar(hex[i]);
                counter++;
        }

        return (counter);
}
