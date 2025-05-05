#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef enum {
    false, 
    true
} bool;

bool isPalindrome(char* s) {

    int size = strlen(s);
    char newS[200000] = { 0 };
    int newSize = 0;

    for (int i = 0; i < size; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
            newS[newSize] = s[i];
            newSize++;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            newS[newSize] = s[i];
            newSize++;
        }
    }

    if (newSize == 0)
    {
        return true;
    }

    for (int i = 0, j = newSize - 1; i < newSize / 2; i++, j--)
    {
        if (newS[i] != newS[j])
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