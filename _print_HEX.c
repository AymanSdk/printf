#include "main.h"

/**
 * print_HEXA - prints an unsigned integer in HEXADIMCIMAL
 * @n: The unsigned integer to print
 * Return: number of printed chars
 */
int print_HEXA(unsigned int n)
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
		hexa[i] = rem + 'A';
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

