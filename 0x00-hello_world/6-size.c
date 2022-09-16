#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'sizeof'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ibytes\n", sizeof(char));
	printf("Size of an int: %ibytes\n", sizeof(int));
	printf("Size of a long int: %ibytes\n", sizeof(long));
	printf("Size of a long long int: %ibytes\n", sizeof(double));
	printf("Size of a float: %ibytes\n", sizeof(float));
	return (0);
}
