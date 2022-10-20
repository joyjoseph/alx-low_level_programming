#include "main.h"
#include <stdio.h>
/**
 *print_numbers - function that prints numbers, from 0 to 9
 *Description: use _putchar twice only in your code
 **/
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
