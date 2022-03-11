#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	char s_alph;
	char b_alph;

	for (s_alph = 'a' ; s_alph <= 'z' ; s_alph++)
		putchar(s_alph);

	for (b_alph = 'A' ; b_alph <= 'Z' ; b_alph++)
		putchar(b_alph);

	putchar('\n');
	return (0);
}
