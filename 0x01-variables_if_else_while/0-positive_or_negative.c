#include <stdlib.h>
#include <time.h>

/*
 * main - entry point
 *
 * Description: a program that takes a number and return whether its posititve or negative or zero
 *
 * Return: always return (0)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0){
		printf("%u is positive\n", n);
	}
	else{
		if(n < 0){
			printf("%d is negative\n", n);
		}
		else{
			printf("%u is zero\n", n);
		}
	}
	return (0);
}
