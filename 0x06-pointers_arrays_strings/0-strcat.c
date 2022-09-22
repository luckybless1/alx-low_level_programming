#include "main.h"
/**
 * _strcat - a function to concatenate  two strings
 * @dest: the pointer of the string to be concatenated
 * @src: the src string to be appended to @dest
 * Return: a pointer to the @dest string
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int dest_len = strlen(dest)


	for (j = 0; src[j] != '\0'; j++)
	{
		dest[dest_len + j] = src[j];
	}
	dest[dest_len + 1] = '\0';
	return (dest);
}
