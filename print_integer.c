#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int print_integer(long num) {
	int len = 0;
	long buff = 1;
	
    	if (num < 0) {
        	len += _putchar('-');
        	num = -num;
    	}
	else
	{
		num = num;
	}

	for (;num/buff > 9;)
		buff *= 10;

	for (;buff != 0;)
	{
		len += _putchar('0' + num/buff);
		num %= buff;
		buff/=10;
	}

	return (len);
}

