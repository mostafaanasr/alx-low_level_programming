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
	printf("size of int = %ld\n",sizeof(int));
	printf("size of char = %ld\n",sizeof(char));
	printf("size of double = %ld\n",sizeof(double));
	return (0);
}
