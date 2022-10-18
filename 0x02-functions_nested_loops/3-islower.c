#include "main.h"

/**
 * _islower -check wether C is lowercase
 * @c: the carecter to print
 *
 * Return: 1 on success
 * return: 0 atherwise
 */

int _islower(int c)
{
	return ( c >= 'a' && c <= 'z');
}
