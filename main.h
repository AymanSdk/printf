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




/* helper functions */
int _putchar(char c);
int _strlen(char *s);

#endif

