#include "main.h"

/**
 * _printf - prints number of args
 * @format: list of types of arg
 * Return: the number of character printed
 */
int _printf(const char *format, ...)
{
	int number, i = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					number += print_char(args);
					i += 2;
					break;
				case '%':
					_putchar('%');
					number++;
					i += 2;
					break;
				case 's':
					number += print_string(args);
					i += 2;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i += 2;
			}
		}
		if (format[i])
		{
			_putchar(format[i]);
			number++;
		}
		i++;
	}
	va_end(args);

	return (number);
}
