#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _printf(const char *format, ...)
{
	int i, j;
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
				}
				else if (format[i] == ' ')
				{
					_putchar('%');
					strlen++;
					i++;
				}
				else
				{
					switch (format[i])
					{
						case 's':
							s = va_arg(args, char *);
							strlen += _strlen(s);
							for (j = 0; s[j] != '\0'; j++)
							{
								_putchar(s[j]);
							}
						case 'c':
							strlen++;
							_putchar(va_arg(args, int));
						default:
							_putchar(format[i]);
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
