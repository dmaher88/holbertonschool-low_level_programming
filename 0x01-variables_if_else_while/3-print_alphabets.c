#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char alphab[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphab[i]);
	}
	putchar('\n');
	return (0);
}
