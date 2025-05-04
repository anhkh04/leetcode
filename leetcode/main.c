#include <stdio.h>
#include <stdlib.h>

int lengthOfLastWord(char* s) {

    int size = strlen(s);

    int cnt = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            if (cnt > 0)
            {
                return cnt;
            }
        }
        else
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{

    return 0;
}