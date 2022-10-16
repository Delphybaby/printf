#ifndef MY_PRINTF
#define MY_PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void _vprintf(const char *format, va_list args);

#endif
