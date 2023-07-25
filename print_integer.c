#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int print_integer(int num) {
	int len = 0;
	int check = 1;
	
    	if (num < 0) {
        	len += _putchar('-');
        	num = -num;
    	}

	for (;num/check > 9;)
		check *= 10;

	for (;check != 0;)
	{
		len += _putchar('0' + num/check);
		num %= check;
		check/=10;
	}

	return (len);
}

