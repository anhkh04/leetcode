#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {

    for (int i = digitsSize - 1; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
        }
        else
        {
            digits[i] += 1;
            *returnSize = digitsSize;
            return digits;
        }
    }

    int newSize = digitsSize + 1;
    *returnSize = newSize;

    int* arr = (int*)malloc(newSize * sizeof(int));
    arr[0] = 1;

    for (int i = 1; i < newSize; i++)
    {
        arr[i] = digits[i - 1];
    }
    return arr;
}

int main()
{

    return 0;
}