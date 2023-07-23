#include<stdio.h>
#include"main.h"
/**
 * _strlen - Entry point
 *
 * Description: 'the program's descriptor'
 * @s: char s
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
        int i;
        int len = 0;

        for (i = 0; *s != '\0'; i++)
        {
                s++;
                len++;
        }
        return (len);
}
