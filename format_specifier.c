#include "main.h"

/**
 * p_char - prints character
 * @args: argument
 * Return: returns amount of char printed
 */

int p_char(va_list args)
{
	char value;

	value = va_arg(args, int);
	_putchar(value);
	return (1);
}

/**
 * p_string - prints strings
 * @args: argument
 * Return: returns value
 */

int p_string(va_list args)
{
	int i;
	const char *s;

	s = va_arg(args, const char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * p_percent - prints a percent symbol
 * @args: argument
 * Return: returns amount of chars printed
 */

int p_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}
