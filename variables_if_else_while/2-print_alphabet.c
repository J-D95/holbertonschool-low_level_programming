#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
