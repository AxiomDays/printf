#include <stdio.h>
#include <limits.h>
#include "main.h"
int main(void)
{
    int len;
    int len2;
    unsigned int ui;

    ui = (unsigned int)INT_MAX + 1024;
    _printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    _printf("Unknown:[%r]\n");
    _printf("%d\n", 65176);
         _printf("%d\n", 65176);
         _printf("%d\n", -777765176);
         _printf("%d\n", 00002);
         _printf("%d\n", 0);
         _printf("%d\n", 7);
         _printf("%d\n", -2255445);
         _printf("Maximum value of int: %d\n", INT_MAX);
         _printf("Minimum value of int: %d\n", INT_MIN);
         printf("--------------------------------\n");
         _printf("%i\n", 65176);
         _printf("%i\n", 0);
         _printf("%i\n", -2255445);
         _printf("Maximum value of int: %i\n", INT_MAX);
         _printf("Minimum value of int: %i\n", INT_MIN);
         _printf("%c%d%s%i\n", 'h', 2, "kira", 4);
	 len = _printf("%s", "This sentence is retrieved from va_args!\n");
	 len2 = printf("%s", "This sentence is retrieved from va_args!\n");
	 printf("These are the compared sizes, _printf:%d and printf:%d\n", len, len2);
    return (0);
}
