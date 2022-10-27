#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitlise the words
 * @i: the pointer to the string
 *
 * Return: capilised word of string
 */

char *cap_string(char *i)
{
	int l, j;

	for (l = 0 ; i[l] != '\0' ; l++)
	{
		if ((i[l] == 32) || (i[l] == 9) || (i[l] == 10) || (i[l] == 44) || (i[l] == 59) || (i[l] == 46) || (i[l] == 33) || (i[l] == 63) || (i[l] == 34) || (i[l] == 40) || (i[l] == 41) || (i[l] == 123) || (i[l] == 125))
		{
			j = l + 1;
			if (isalpha(i[j]))
			{
				if (i[j] >= 97 && i[j] <= 122)
				{
					i[j] = i[j] - 32;
				}
			}
		}
	}
	return (i);
}
