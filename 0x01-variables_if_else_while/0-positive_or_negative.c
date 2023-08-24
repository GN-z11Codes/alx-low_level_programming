#include <stdlib.h>
#include <time.h>
#include <stdio.h>

<<<<<<< HEAD
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
=======

/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return: Always 0 (Success)
*/

>>>>>>> 5f3d3eca5a94dca1ea2ec72d99652cc44f458b3b
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

<<<<<<< HEAD
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
=======
	/*my code*/
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
>>>>>>> 5f3d3eca5a94dca1ea2ec72d99652cc44f458b3b

	return (0);
}
