#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    int test = 7;
    unsigned int ui;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = _printf("Let's keep %s thinking! Say this %d times!\n", "positive", test);
    ui = (unsigned int)INT_MAX + 1024;
    _printf("Length:[%d, %i, %d]\n", len, len, len2);
    _printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    _printf("Unknown:[%r]\n");
    printf("%d\n", 65176);
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
    return (0);
}
