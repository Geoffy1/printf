#include "main.h"

/**
 * _puts -> this is a function that puts
 * @str: a parm to _puts function
 * Return - nothing
 */
int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}

int print_string(va_list args)
{
	return (_puts(va_arg(args, char *)));
}
