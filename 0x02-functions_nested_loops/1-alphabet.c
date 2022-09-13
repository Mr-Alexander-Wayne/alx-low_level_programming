#include "main.h"

/**
*main - Entry point
*print_alphabet_x10 - Used to print
*Return: 0 nothing, return void
*/

void print_alphabet_x10(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
