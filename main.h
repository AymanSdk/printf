#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>


/* main print function */
int _printf(const char *format, ...);


/* format handler */
int format_handler(char specif, va_list args);


/* print functions */

int print_string(va_list args);
int print_int(int n);
int print_binary(unsigned int n);
int print_uint(unsigned int n);
int print_octa(unsigned int n);
int print_HEXA(unsigned int n);
int print_hexa(unsigned int n);




/* helper functions */
int _putchar(char c);
int _strlen(char *s);

#endif

