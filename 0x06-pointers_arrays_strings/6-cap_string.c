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
	int l, j, m;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (l = 0 ; i[l] != '\0' ; l++)
	{
		for (m = 0 ; m <= 12 ; m++)
		{
			if (i[l] == sep[m])
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
	}
	return (i);
}
