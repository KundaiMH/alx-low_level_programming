#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the address of a string
 * @to: pointer to the string to be set
 */
void set_string(char **s, char *to)
{
	int i;

	for (i = 0; to[i] != '\0'; i++)
		(*s)[i] = to[i];
	(*s)[i] = '\0';
}
