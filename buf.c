#include "main.h"

/**
 * unsigned_number_to_string -function to print uint
 * @base: base
 * @number: number
 * @buffer: pointer
 */

void unsigned_number_to_string(uint64_t number, int base, char *buffer)
{
	char buf[65];
	int i;
	int cur;
	int digit;

	if (number == 0)
	{
		*buffer++ = '0';
		*buffer = 0;
		return;
	}
	for (i = 0; i < 65; i++)
	{
		buf[i] = 0;
	}
	cur = 0;
	
	while (number)
	{
		digit = number % base;
		if (digit >= 10){
			buf[cur++] = 'a' + (digit - 10);
		} else
		{
			buf[cur++] = '0' + digit;
		}
		number /= base;
	}
	for (i = cur - 1; i != 0; i--)
	{
		*buffer++ = buf[i];
	}
	*buffer++ = buf[0];
	*buffer = 0;
}

/**
 * number_to_string - function that prints num
 * @number: number
 * @base: base
 * @buffer: pointer
 */

void number_to_string(int64_t number, int base, char *buffer)
{
	if (number < 0)
	{
		*buffer++ = '-';
		number = -number;
	}
	unsigned_number_to_string(number, base, buffer);
}
