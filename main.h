#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>



/* main print function */
int _printf(const char *format, ...);


/* format handler */
int format_handler(char specif, va_list args);


/* print functions */

int print_string(va_list args);
int print_int(int n);
int print_binary(unsigned int n);
<<<<<<< HEAD
int print_uint(unsigned int n);"
=======
int print_octa(unsigned int n);

>>>>>>> 7c0c3166cb41c4467ce39e024b08aea999d9c6f1



/* helper functions */
int _putchar(char c);
int _strlen(char *s);

#endif

