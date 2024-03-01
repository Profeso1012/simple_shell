#include "main.h"
/**
 * path_finder - check if the command exists in
 * path and creates a path and append it to the directory if it
 * doesn't
 * @ptr: points to the command.
 *
 *
 * Return: returns 1 on success and 0 on failure.
 */
int path_finder(char **ptr)
{
	char *ppath, *_token, *store;
	static char path_str[1024], array[1000];
	unsigned int i = 0;

	if (access(*ptr, X_OK) == 0)
		return (1);
	ppath = getenv("PATH");
	if (ppath == NULL)
		return (0);
	_strcpy(path_str, ppath);
	_token = my_strtok(path_str, ":");
	while (_token != NULL)
	{
		store = malloc(_strlen(_token) + _strlen("/") + _strlen(*ptr) + 1);
		if (store == NULL)
		{
			perror(*ptr);
			free(store);
			return (0);
		}
		_strcpy(store, _token);
		_strcat(store, "/");
		_strcat(store, *ptr);
		if (access(store, X_OK) == 0)
		{
			while (i < _strlen(store))
			{
				array[i] = store[i];
				i++;
			}
			array[i] = '\0';
			free(store);
			*ptr = array;
			return (1);
		}
		free(store);
		_token = my_strtok(NULL, ":");
	}
	perror(*ptr);
	return (0);
}
