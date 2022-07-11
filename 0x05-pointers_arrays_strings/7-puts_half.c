#include "main.h"

/**
 *_strlen - counts string length
 *
 *@s: string pointer variable
 *
 *Return: i;
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * puts_half - prints half of a string
 *
 * @str: string pointer variable
 */

void puts_half(char *str)
{
	int i, c, n;

	c = _strlen(str);

	if (c % 2 == 0)
		n = c / 2;
	else
		n = (c + 1) / 2;

	for (i = n; i < c; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
