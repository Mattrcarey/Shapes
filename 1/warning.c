/// file: warning.c
/// description: faulty code example that needs fixing.
/// @author RIT CS Dept.

#include <stdio.h>

/// compute a value.
int compute(int a) {
    return a*5;
}

#define SIZE 0

/// main function should print 2018 and return 0 as the process return status.
int main(void) {
    int x = 1918;
    int y = compute(20);

    printf("%d\n", y+x);

    if ( y < 2018)
    	return 1;
    else 
	return 0;
}

