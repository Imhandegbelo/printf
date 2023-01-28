#include "main.h"

/**
 * printf_rot13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */

int printf_rot13(va_list args)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char first[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char second[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; first[j] && !k; j++)
		{
			if (s[i] == first[j])
			{
				_putchar(second[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
