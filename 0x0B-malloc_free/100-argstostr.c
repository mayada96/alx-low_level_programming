#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Enter the string of all argumenrs
 * @ac: the number of arguments
 * @av: the argument vectir string
 *
 * Return: concatination of all arguments or NULL
 */

char *argstostr(int ac, char **av)
{
	char **p;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(av) * ac);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < ac ; i++)
		{
			printf("%s\n", av[i]);
		}
	}
	return (*p);

}
