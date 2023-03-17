#include <stdio.h>

/**
 * Main - entry point
 *
 * Description: program that prints the size of int, char, double
 *
 * Return: always zero
*/

int main(void)
{
	printf("size of a char : %ld\n", sizeof(char));
	printf("size of an int : %ld\n", sizeof(int));
	printf("size of a long int : %ld\n", sizeof(long int));
	printf("size of a long long int : %ld\n", sizeof(long long int));
	printf("size of a float : %ld\n", sizeof(float));
	return (0);
}
