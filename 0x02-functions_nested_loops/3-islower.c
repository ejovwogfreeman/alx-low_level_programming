#include "main.h"
/**
 * _islower - funtion to check for lowercase character
 * author: Dr-savantcode
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
