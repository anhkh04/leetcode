#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    false, 
    true
} bool;

bool isPalindrome(int x) 
{
    if (x < 0)
    {
        return false;
    }
    int* arr = (int*)malloc(10 * sizeof(int));

    int index = 0;
    while (x > 0)
    {
        int tmp = x % 10;
        arr[index] = tmp;
        x /= 10;
        index++;
    }

    if (index == 0)
    {
        return true;
    }

    for (int i = 0, j = index - 1; i < index / 2; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    printf("%d", isPalindrome(121));

    return 0;
}