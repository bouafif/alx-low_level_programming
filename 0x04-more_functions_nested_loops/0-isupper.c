#include "main.h"
/**
 *  _isupper - check if the letter is uppercase
 *  @x: the number to be checked
 * Return: 1 for upper case and 0 for anything else
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 98)
	{
		return (1);
	}
	return (0);
}
