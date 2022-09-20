#include "main.h"
/** _strlen - this function returns the length of a string
 * @s: string
 * Return: length 
 **/
int _strlen(const char *str)
{
	size_t len = 0;
	while ( *str++)
		len++;
	return (len);
}
