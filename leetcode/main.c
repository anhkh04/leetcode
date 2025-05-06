#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

int hammingWeight(int n) {
	int cnt = 0;
	while (n > 0)
	{
		if ((n & 1) == 1) cnt++;
		n >>= 1;
	}

	return cnt;
}

int main()
{

	return 0;
}