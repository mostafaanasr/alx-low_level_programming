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
	putchar('\n');

	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}

	return (0);
}
