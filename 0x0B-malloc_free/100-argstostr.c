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
	char *p;
	int i, j, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; j < av[i][j] ; j++)
		{
			size++;
		}
	}
	p = malloc(sizeof(char) * size + 1);
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
	return (p);

}
