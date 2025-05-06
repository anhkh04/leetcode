#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

char* convertToTitle(int columnNumber) {
    char ch[] = { 0 , 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
                 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
    int num = columnNumber;
    char* str = (char*)calloc(sizeof(char), 10);
    int i = 9;

    while (num > 0)
    {
        int mod = num % 26;
        num /= 26;
        if (mod == 0)
        {
            mod = 26;
            num -= 1;
        }
        str[--i] = ch[mod];
    }
    str += i;

    return str;
}
int main()
{

	return 0;
}