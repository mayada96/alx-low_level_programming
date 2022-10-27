#include "main.h"
#include <ctype.h>

/**
 * string_toupper - converting string to upper case
 * @l: all the chareckter to uppercasee
 *
 * Return: the upper chareckters
 */

char *string_toupper(char *l)
{
	int i = 0;

	for (i = 0 ; l[i] != '\0' ; i++)
	{
		if (isalpha(l[i]))
		{
			if (l[i] >= 97 && l[i] <= 122)
			{
				l[i] = l[i] - 32;
			}
		}
	}
	return (l);
}
