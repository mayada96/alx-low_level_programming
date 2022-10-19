#include "main.h"

/**
 * times_table -Print the numbers ib tables
 *
 * Return: nothing on success
 */

void times_table(void)
{
	int a, b, c, d, e, f, g, h, i, j;

	for (a = 0 ; a <= 9 ; a++)
	{
		_putchar(48);
		if (a == 9)
	       	{
			break;
		}
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');
	for (b = 0 ; b <= 9 ; b++)
	{
		_putchar(b + '0');
		if (b == 9)
		{
			break;
		}
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');
	for (c = 0 ; c <= 18 ; c += 2)
	{
		if (c > 9)
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		else
		{
			_putchar(c + '0');
		}
		if (c == 18)
		{
			break;
		}
		_putchar(',');
		_putchar(' ');
		if (c < 8)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
	for (d = 0 ; d <= 27 ; d += 3)
	{
		if (d > 9)
		{
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
		}
		else
		{
			_putchar(d + '0');
		}
		if (d == 27)
		{
			break;
		}
                _putchar(',');
		_putchar(' ');
		if (d < 9)
		{
			_putchar(' ');
		}
	}
		_putchar('\n');
		for (e = 0 ; e <= 36 ; e += 4)
		{
			if (e > 9)
			{
				_putchar((e / 10) + '0');
				_putchar((e % 10) + '0');
			}
			else
			{
				_putchar(e + '0');
			}
			if (e == 36)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
			if (e < 8)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
		for (f = 0 ; f <= 45 ; f += 5)
		{
			if (f > 9)
			{
				_putchar((f / 10) + '0');
				_putchar((f % 10) + '0');
			}
			else
			{
				_putchar(f + '0');
			}
			if (f == 45)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
			if (f < 5)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
		for (g = 0 ; g <= 54 ; g += 6)
		{
			if (g > 9)
			{
				_putchar((g / 10) + '0');
				_putchar((g % 10) + '0');
			}
			else
			{
				_putchar(g + '0');
			}
			if (g == 54)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
			if (g < 6)
			{
				_putchar(' ');
			}
		}
			_putchar('\n');
			for (h = 0 ; h <= 63 ; h += 7)
			{
				if (h > 9)
				{
					_putchar((h / 10) + '0');
					_putchar((h % 10) + '0');
				}
				else
				{
					_putchar(h + '0');
				}
				if (h == 63)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
				if (h < 7)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
			for (i = 0 ; i <= 72 ; i += 8)
			{
				if (i > 9)
				{
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
				}
				else
				{
					_putchar(i + '0');
				}
				if (i == 72)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
				if (i < 8)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
			for (j = 0 ; j <= 81 ; j += 9)
			{
				if (j > 9)
				{
					_putchar((j / 10) + '0');
					_putchar((j % 10) + '0');
				}
				else
				{
					_putchar(j + '0');
				}
				if (j == 81)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
				if (j < 9)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
}
