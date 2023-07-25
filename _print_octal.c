#include "main.h"

/**
 * print_octa - print an unsidgned integer in octal format
 * @n: The unsigned integer to be print
 * Return: The Number of characters printed
 */

int print_octa(unsigned int n)
{
	char octal_p[12];
	int counter = 0;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n != 0)
	{
		octal_p[i] = (n % 8) + '0';
		n /= 8;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(octal_p[i]);
		counter++;
	}

	return (counter);
}
