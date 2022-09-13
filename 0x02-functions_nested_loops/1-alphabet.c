#include "main.h"

/**
*main - print_alphabet_x10
*
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
