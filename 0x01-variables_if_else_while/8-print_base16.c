#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	int num;
	char alph;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar(num);
	}
	for (alph = 'a' ; alph <= 'f'; alph++)
	{
		putchar(alph);
	}

	putchar('\n');
	return (0);
}
