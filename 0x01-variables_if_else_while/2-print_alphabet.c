#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

=======
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
>>>>>>> 5f3d3eca5a94dca1ea2ec72d99652cc44f458b3b
	putchar('\n');

	return (0);
}
