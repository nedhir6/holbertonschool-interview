#include "regex.h"
/**
 * regex_match - compares 2 strings
 * @str: string 1
 * @pattern: pattern string
 * Return: 1 or 0
 */
int regex_match(char const *str, char const *pattern)
{
	int tempo = 0;

	if (*str == '\0' && *pattern == '\0')
		return (1);

	if ((*str == *pattern || *pattern == '.') && *(pattern + 1) != '*')
		return (regex_match(str + 1, pattern + 1));

	if (*(pattern + 1) == '*')
	{
		if (*str != '\0' && (*str == *pattern || *pattern == '.'))
			tempo = regex_match(str + 1, pattern);

		return (regex_match(str, pattern + 2) || tempo);
	}
	return (0);
}
