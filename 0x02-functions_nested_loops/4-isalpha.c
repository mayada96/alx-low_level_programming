#include "main.h"

/**
 * _isalpha - check wether its ckarector or not
 * @c: the ckar to print
 *
 * Return: 1 on success
 * Return 0 atherwise
 */

int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z' && c >= 'A' && c <='Z');
}
