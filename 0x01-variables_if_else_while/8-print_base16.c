#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		ch = '0' + i;
		putchar(ch);
	}

	for (i = 0; i < 6; i++)
	{
		ch = 'a' + i;
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
