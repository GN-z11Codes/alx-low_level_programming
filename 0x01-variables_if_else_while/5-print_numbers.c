<<<<<<< HEAD
#include <stdio.h>

/**
 *main -> assign a random number to the variable n each time it is executed
 *and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
printf("%d", n);
}
printf("\n");
return (0);
=======
#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	printf("\n");

	return (0);
>>>>>>> 5f3d3eca5a94dca1ea2ec72d99652cc44f458b3b
}
