#include <stdio.h>
/**
 *
 * main - Entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	int alph;

	for (alph = 'a' ; alph < 'z' ; alph++)
	{
		if (alph == 'e' || alph == 'q')
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
