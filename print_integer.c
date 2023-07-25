#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_integer(int num) {
	int reverse;
	int temp;
	
    	if (num < 0) {
        	putchar('-');
        	num = -num;
    	}

    	reverse = 0;
    	temp = num;
    	while (temp > 0) {
        	reverse = reverse * 10 + temp % 10;
        	temp /= 10;
    	}

    	if (num == 0)
        	_putchar('0');
    	else {
        	while (reverse > 0) {
            	_putchar('0' + reverse % 10);
            	reverse /= 10;
        	}
    	}
}

