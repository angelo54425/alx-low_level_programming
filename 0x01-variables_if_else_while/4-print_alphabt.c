#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	char alph;

	for (alph = 'a' ; alph < 'z' ; alph++)
	{
		if (alph == 'q' || alph == 'e')
		{
			continue;
		}
		else
		{
			putchar(alph);
		}
	}
	putchar('\n');
	return (0);
}
