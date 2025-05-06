#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

typedef enum
{
	false, 
	true
} bool;

bool isHappy(int n)
{
	int res = 0;

	while (res != 1)
	{
		res = 0;
		while (n > 0)
		{
			res += pow(n % 10, 2);
			n /= 10;
		}
		n = res;
		if (res < 10 && res != 1 && res != 7)
		{
			return false;
		}
	}

	return true;
}

int main()
{

	return 0;
}