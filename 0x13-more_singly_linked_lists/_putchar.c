#include <unistd.h>

/**
 * _putchar - print the chareckter c
 * @c: the chareckter to be printed
 *
 * Return: 1 on success
 * -1 on failer
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
