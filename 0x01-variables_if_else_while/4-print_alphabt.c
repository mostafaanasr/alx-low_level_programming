#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints the alphabets
 *
 * Return: always return (0)
*/

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'e' || x == 'q')
			x++;
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
