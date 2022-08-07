#include "main.h"

/**
 * _puts - this is a function that puts
 * @str: a parm to _puts function
 * print_string - printing a str
 * Return: 0
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

/**
 * print_string - printing a str
 * @args: parameter
 * Return: 0
 */
int print_string(va_list args)
{
	return (_puts(va_arg(args, char *)));
}
