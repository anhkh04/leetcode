#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int mySqrt(int x) {

	double test = 1000;

	for (int i = 0; i < 10; i++)
	{
		test = (test + (x / test)) / 2;
	}

	return (int)test;
}

int main()
{
	printf("%d", mySqrt(45));

    return 0;
}