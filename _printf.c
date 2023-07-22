#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int i;
	int strlen;
	va_list args;
	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			putchar(format[i]);
			strlen++;
		}
	}
	va_end(args);
	return (strlen - 1);
}
