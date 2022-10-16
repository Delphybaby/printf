#include <unistd.h>

/**
 * _putchar - fucntion that prints character
 * @c: character
 * Return: write function
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
