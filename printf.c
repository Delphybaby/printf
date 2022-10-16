#include "main.h"
#include <stdint.h>

/**
 * _vprintf - just like vprint, checks conditions
 * @format: format
 * @args: argument
 * Return: value
 */

void _vprintf(const char *format, va_list args)
{
	char val;
	const char *s;
	int percent = 0;

	while (*format)
	{
		if (percent == 0)
		{
			if (*format == '%')
			{
				percent = 1;
			} else
			{
				_putchar(*format);
			}
		} else if (percent == 1)
		{
			switch (*format)
			{
				case 'c':
					val = va_arg(args, int);

					_putchar(val);
				break;
				case 's':
					s = va_arg(args, const char *);

					while (*s)
						_putchar(*s++);
				break;

				case '%':
					val = va_arg(args, int);
					_putchar(*format);
				break;
				case 'p':
					_putchar('0');
					_putchar('x');
				break;
			}
			percent = 0;
		}
		format++;
	}

}



/**
 * _printf - function that produces output according to a format
 * @format: the format
 * Return: value
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	_vprintf(format, args);
	va_end(args);

	return (0);
}
