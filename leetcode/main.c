#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int* getRow(int rowIndex, int* returnSize) 
{
    int arrSize = rowIndex + 1; 
    int** arr = malloc(sizeof(int*) * arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        arr[i] = malloc(sizeof(int) * (i + 1)); 
        arr[i][0] = 1; 
        arr[i][i] = 1; 

        for (int j = 1; j < i; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j]; 
        }
    }

    *returnSize = arrSize; 
    return arr[rowIndex];
}

int main()
{
    int size; 
    int* a = getRow(3, &size); 

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]); 
    }
    return 0;
}