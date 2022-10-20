#include "main.h"
#include <stdio.h>
/**
 *_isupper - function that checks for uppercase characters
 *@z: int type number
 *
 *Return: 1 if uppercase, else 0
 **/
int _isupper(int z)
{
	if (z > 64 && z < 91)
	{
		return (1);
	}
	return (0);
}
