#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string
 *
 * Return: number of characters printed
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
 * print_string - prints args
 * @args: arguement printed
 * Return: 0
 */
int print_string(va_list args)
{
	return (_puts(va_arg(args, char *)));
}
