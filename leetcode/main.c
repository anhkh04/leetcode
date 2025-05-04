#include <stdio.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {

    for (int j = 0; ; j++)
    {
        for (int i = 0; i < strsSize - 1; i++)
        {
            if (strs[i][j] != strs[i + 1][j])
            {
                strs[0][j] = 0;
                break;
            }
        }

        if (strs[0][j] == 0)
        {
            return strs[0];
        }
    }
}

int main()
{
    char* s[] = { "flower", "flow", "flight" };


    char* res = longestCommonPrefix(s, 5);
    return 0;
}