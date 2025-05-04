#include <stdio.h>
#include <stdlib.h>

int romanToInt(char* s) {
    int res = 0;

    int i = 0;
    while (s[i] != 0)
    {
        switch (s[i])
        {
        case 'I':
            res += 1;
            break;
        case 'V':
            if (i > 0 && s[i - 1] == 'I')
            {
                res += 3;
                break;
            }
            res += 5;
            break;
        case 'X':
            if (i > 0 && s[i - 1] == 'I')
            {
                res += 8;
                break;
            }
            res += 10;
            break;
        case 'L':
            if (i > 0 && s[i - 1] == 'X')
            {
                res += 30;
                break;
            }
            res += 50;
            break;
        case 'C':
            if (i > 0 && s[i - 1] == 'X')
            {
                res += 80;
                break;
            }
            res += 100;
            break;
        case 'D':
            if (i > 0 && s[i - 1] == 'C')
            {
                res += 300;
                break;
            }
            res += 500;
            break;
        case 'M':
            if (i > 0 && s[i - 1] == 'C')
            {
                res += 800;
                break;
            }
            res += 1000;
            break;
        default:
            break;
        }
        i++;
    }

    return res;
}


int main()
{
    printf("%d", romanToInt("LVIII"));

    return 0;
}