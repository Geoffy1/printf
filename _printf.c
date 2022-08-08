#include "main.h"

/**
 * _printf - prints numbers of args
 * @format: list of types of arg
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int counted = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					counted += print_char(args);
					i += 2;
					break;
				case '%':
					_putchar('%');
					counted++;
					i += 2;
					break;
				case 's':
					counted += print_string(args);
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
			counted++;
		}
		i++;
	}
	va_end(args);
	return (counted);
}
