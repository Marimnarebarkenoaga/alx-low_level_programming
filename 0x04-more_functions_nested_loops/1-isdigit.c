#include "main.h"

/**
 * _isdigit - Checks for uppercase characters
 *
 * @c: Number to be checked
 *
 * Return: 1 (Sucess) OR 0 (Failure)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
