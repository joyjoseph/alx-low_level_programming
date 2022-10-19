#include "main.h"
/**
 *main - Prints Holberton as a message
 *Return: 0 success, non zero fail
 **/
int main(void)
{
	int i = 0;
	char strng_ptchr[8] = "_putchar";

	while (i < 8)
	{
		_putchar(strng_ptchr[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
