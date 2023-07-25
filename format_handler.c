#include "main.h"
#include <stdarg.h>


/**
 * format_handler - handle the format specifier for _printf
 * @specif : format specifier
 * @args : list of arguments
 * Return: Number of printed characters
 */

int format_handler(char specif, va_list args)
{
int printed_chars = 0;

if (specif == '%')
printed_chars += _putchar('%');
else if (specif == 'c')
printed_chars += _putchar(va_arg(args, int));
else if (specif == 's')
printed_chars += print_string(args);
else if (specif == 'd' || specif == 'i')
printed_chars += print_int(va_arg(args, int));
else if (specif == 'b')
printed_chars += print_binary(va_arg(args, unsigned int));
<<<<<<< HEAD
else if (specif += 'u')
printed_chars += print_uint(va_arg(args, unsigned int));
=======
else if (specif == 'o')
printed_chars += print_octa(va_arg(args, unsigned int));
>>>>>>> 7c0c3166cb41c4467ce39e024b08aea999d9c6f1
else
{
printed_chars += _putchar('%');
printed_chars += _putchar(specif);
}
return (printed_chars);
}
