#include "main.h"
/**
  * _isupper - checks for uppercase characters
  * @c: the function parameter
  * Return: if it's uppercase
  */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
