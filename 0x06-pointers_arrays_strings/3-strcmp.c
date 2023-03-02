/**
 * _strcmp - compares two strings
 * @s1: first str
 * @s2: second str
 *
 * Return: -ve val if s1 is less than s2,
 *         +ve val if s1 is greater than s2,
 *         0 if s1 and s2 are equal
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
