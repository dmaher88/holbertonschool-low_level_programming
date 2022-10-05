#include "main.h"
/**
 * print_alphabet_x10 - function with nested loop to print alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n;
	int j = 0;

	while (j < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		j++;
		_putchar('\n');
	}
}
