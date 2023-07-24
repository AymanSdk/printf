#include "main.h"

/**
 * _printf - print anything
 * @format: list of argument types passed to the function
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				printed_chars += print_char(args);
			}
			else if (*format == 's')
			{
				printed_chars += print_string(args);
			}
			else if (*format == '%')
			{
				printed_chars += print_percent(args);
			}
			else
			{
				_putchar('%');
				printed_chars++;
			}
		}
		else
		{
			_putchar(*format);
			printed_chars++;
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
