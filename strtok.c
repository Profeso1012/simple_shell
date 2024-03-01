#include "main.h"

/**
 * my_strtok - function
 * @str: line read
 * @delim: arg 2
 * Return: pointer to token
 */

char *my_strtok(char *str, const char *delim)
{
	static char *internal_str = NULL;
	char *end;

	if (!str && !internal_str)
		return (NULL);
	if (!str)
		str = internal_str;
	else
		internal_str = str;
	while (*str && is_delimiter(*str, delim))
		str++;
	if (!*str)
	{
		internal_str = NULL; 
		return (NULL);
	}
	end = str;
	while (*end && !is_delimiter(*end, delim))
		end++;
	if (*end)
		*end = '\0';
	internal_str = end + 1;
	return (str);
}

/**
 * is_delimiter - ...
 * @c: delim
 * @delim: ...
 * Return: 0 on success
 */
int is_delimiter(char c, const char *delim)
{
	while (*delim)
	{
		if (c == *delim)
			return (1);
		delim++;
	}
	return (0);
}


/**
 * my_strcspn - function2
 * @str: ...
 * @reject: ...
 * Return: ...
 */
size_t my_strcspn(const char *str, const char *reject)
{
	size_t i = 0;
	const char *j;

	while (*str)
	{
		int found = 0;
		j = reject;
		while (*j)
		{
			if (*str == *j)
			{
			found = 1;
			break;
			}
			j++;
		}
		if (!found)
		{
			str++;
			i++;
		}
		else
			break;
	}
	return (i);
}
