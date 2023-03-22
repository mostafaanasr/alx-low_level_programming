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
	char y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');

	return (0);
}
