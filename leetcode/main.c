#include <stdio.h>
#include <stdlib.h>

int strStr(char* haystack, char* needle) {
    int i = 0, index = 0;

    while (haystack[i] != 0)
    {
        int check = 1;
        index = i;
        for (int j = 0, k = i; needle[j] != 0; j++, k++)
        {
            if (needle[j] != haystack[k])
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            return index;
        }
        i++;
    }

    return -1;
}

int main()
{

    return 0;
}