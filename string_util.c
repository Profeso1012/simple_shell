#include <stdio.h>
/**
 * _strspn - imitates the strspn function
 * @s: pointer to str passed
 * @accept: char to be counted
 * Return: number of @accept counted
 */
size_t _strspn(const char *s, const char *accept)
{
	size_t i = 0;
	int j;

	while (s[i] != '\0')
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		i++;
	}
	return (i);
}

/**
 * _strlen - counts number of chars in a str
 * @s: str passed
 *
 * Return: length of str passed
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, const char *src)
{
	int dlen = 0, i;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}


/**
 * _strcmp - Compares pointers to two strings.
 * @s1: Pointer to the first string to be compared.
 * @s2: Pointer to the second string to be compared.
 * Return: (0) soup and chicken
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}


/**
 * _strcpy - func  copies the string pointed to by pointer
 * @dest: pointer to destination address
 * @src: pointer to source address
 * Return: pointer to character
 */

char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
