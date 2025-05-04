#include <stdio.h>
#include <stdlib.h>

typedef enum {
    false,
    true
} bool;

bool isValid(char* s) {

    char stack[10000];
    char* top = stack;
    int i = 0, j = 1;

    while (s[i] != 0)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            stack[j] = s[i];
            top = &stack[j];
            j++;
        }
        else
        {
            if ((stack[1] == 0) ||
                (s[i] == ')' && (*top) != '(') ||
                (s[i] == ']' && (*top) != '[') ||
                (s[i] == '}' && (*top) != '{'))
            {
                return false;
            }
            *top = 0;
            top -= 1;
            j--;
        }
        i++;
    }
    if (*top != 0)
    {
        return false;
    }

    return true;
}
int main()
{
    printf("%d", isValid("()"));
    return 0;
}