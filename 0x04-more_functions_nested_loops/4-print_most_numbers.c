#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers - function that prints the numbers, from 0 to 9
 *Description:use _putchar twice only in your code
 **/
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
