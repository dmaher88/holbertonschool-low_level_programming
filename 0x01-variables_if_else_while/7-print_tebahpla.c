#include <stdio.h>
/**
 * main - print reverse alphabet with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char revalp[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(revalp[i]);
	}
	putchar('\n');
	return (0);
}
