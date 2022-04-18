#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 *_printf - function to print out string characters with format codes
 *
 * @format:string characters
 *Returns: the lenght of the string in printf.
 */

int _printf(const char *format, ...)
{
	int i;
	int len = 0;
	char *newstr = NULL;

	while (format[len] != '\0')
	{
		len++;
	}

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr == NULL)
	{
		return (1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		newstr[i] = format[i];
	}
	newstr[i] = '\0';

	write(1, format, len);
	free(newstr);
	return (0);
}

int main(void)
{
	char *s = "Let's try to printf a simple sentence.\n";
	_printf(s);
	printf("%s", s);
}
