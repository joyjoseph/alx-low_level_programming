#include "main.h"
#include <stdio.h>
/**
 *print_diagonal - function that draws a diagonal line on the terminal
 *@n: is the number of times the character \ should be printed
 *Description: You can only use _putchar function to print
 **/
void print_diagonal(int n)
{
	int c;

	c = 0;
	while (n > n)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
	{
		_putchar('\n');
	}

}
