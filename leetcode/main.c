#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

#include <string.h>
#include <math.h>

int titleToNumber(char* columnTitle)
{
    int strSize = strlen(columnTitle);
    int res = 0;
    for (int i = strSize - 1, j = 0; i >= 0; i--, j++)
    {
        res += (columnTitle[i] - 64) * pow(26, j);
    }

    return res;
}

int main()
{

	return 0;
}