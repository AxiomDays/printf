#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0;
	int j;
	int strlen = 0;
	char *s;
	va_list args;
	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				i++;
				if (format[i] == '\0')
				{
					_putchar('%');
					strlen++;
					continue;
				}
				else if (format[i] == ' ')
				{
					_putchar('%');
					_putchar(' ');
					strlen++;
					i++;
					continue;
				}
				else
				{
					switch (format[i])
					{
						case 's':
							i++;
							s = va_arg(args, char *);
							strlen += _strlen(s);
							for (j = 0; s[j] != '\0'; j++)
							{
								_putchar(s[j]);
							}
							break;
						case 'c':
							i++;
							strlen++;
							_putchar(va_arg(args, int));
							break;
						default:
							_putchar('%');
							strlen++;
							strlen++;
					}
				}
			}
			_putchar(format[i]);
			 strlen++;
		}
	}
	va_end(args);
	return (strlen);
}
