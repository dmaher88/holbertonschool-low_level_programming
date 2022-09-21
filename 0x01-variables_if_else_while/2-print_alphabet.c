#include <stdio.h>
/**
 * main - print the alphabet followed by a new line
 *
 * Return: Always (Success)
 */
int main(void)
{
	char alphab[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphab[i]);
	}
	putchar('\n');
	return (0);
}
