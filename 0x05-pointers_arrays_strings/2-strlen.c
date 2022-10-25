#include "main.h"
/**
*_strlen-Finds the length of a string.
*@s:String pointer to the string whose length is to be found.
*Return:returns the length of the string.
*/

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
	len += 1;
	*s + *s + 1;
	}
	return (len);
}
