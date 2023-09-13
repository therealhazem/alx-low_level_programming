#include "main.h"

/**
 * main - print _putchar
 * is written by mbah
 * Return: 0 (Success)
 */

int main(void)
{
	char str[] = "_putcher";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putcher(str[ch]);
	_putchar('\n');

	return (0);
}
