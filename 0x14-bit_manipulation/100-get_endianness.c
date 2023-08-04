#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: Zer0 for big, 0ne for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
