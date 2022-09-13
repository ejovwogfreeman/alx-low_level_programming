/**
 * _islower - function to check for lower case character
 * @c: is the int that will user for the argument of the funmction
 * Return : 0
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
