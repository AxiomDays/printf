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
	if (*s == '\\')
	{
		if (*(s + 1) != '\0')
		{
			if (*(s + 1) == 'n' || *(s + 1) == 't' || *(s + 1) == 'r' || *(s + 1) == '\\') 
			{
				s += 2; 
				len++;
				break;
			}
			else 
			{
				s++;
				break;
			}
		}
		else
		{
			len++;
			break;
		}
	}
	else
	{
		s++;
		len++;
	}
	}
	return (len);
}
