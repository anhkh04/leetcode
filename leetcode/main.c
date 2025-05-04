#include <stdio.h>
#include <stdlib.h>

char* addBinary(char* a, char* b) {
    int i = strlen(a);
    int j = strlen(b);
    int max = fmax(i, j) + 2;

    char* res = (char*)malloc(max * sizeof(char));

    char carry = '0';
    i--, j--;
    res[--max] = 0;

    while (max-- > 0)
    {
        int digit = 0;
        if (i >= 0)
        {
            digit += (a[i] - '0');
            i--;
        }
        if (j >= 0)
        {
            digit += b[j] - '0';
            j--;
        }

        digit += carry - '0';
        if (digit % 2 != 0)
        {
            res[max] = '1';
            carry = (digit == 1) ? '0' : '1';
        }
        else
        {
            res[max] = '0';
            carry = (digit == 0) ? '0' : '1';
        }
    }

    if (res[0] == '0')
    {
        return res + 1;
    }
    return res;
}

int main()
{

    return 0;
}