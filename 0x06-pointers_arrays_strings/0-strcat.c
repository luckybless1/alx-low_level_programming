#include "main.h"
/**
 * _strcat - a function to concatenate  two strings
 * @dest: the pointer of the string to be concatenated
 * @src: the src string to be appended to @dest
 * Return: a pointer to the @dest string
 */
char *_strcat(char *dest, char *src)
{
	int j = 0;
	int dest_len = 0;

	while (dest_len[j++])
	{
		dest_len++;
	}
	for (j = 0; src[j]; j++)
	{
		dest[dest_len++] = src[j];
	}
	return (dest);
}
