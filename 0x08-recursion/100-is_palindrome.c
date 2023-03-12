#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_helper - Helper function for is_palindrome
 * @s: The string to check
 * @start: The index of the first character to compare
 * @end: The index of the last character to compare
 *
 * Return: 1 if the substring from start to end is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
        /* If we've compared all pairs of characters, it's a palindrome*/
		return (1);
	}
	else if (s[start] != s[end])
	{
        /* If we find a mismatched pair of characters, it's not a palindrome*/
		return (0);
	}
	else
	{
        /* Compare the next pair of characters*/
		return (is_palindrome_helper(s, start+1, end-1));
	}
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len -1));
}
