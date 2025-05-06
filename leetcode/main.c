#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>

int majorityElement(int* nums, int numsSize) {

    int arr[10000][2] = { 0 };

    int row = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int check = 1;
        int index;

        for (int j = 0; j < row; j++)
        {
            if (nums[i] == arr[j][0])
            {
                check = 0;
                index = j;
                break;
            }
        }
        if (check == 0)
        {
            arr[index][1]++;
        }
        else
        {
            arr[row][0] = nums[i];
            arr[row++][1]++;
        }
    }

    int index = 0;
    int max = arr[index][1];
    for (int i = 0; i < row; i++)
    {
        if (arr[i][1] > max)
        {
            max = arr[i][1];
            index = i;
        }
    }

    return arr[index][0];
}

int main()
{

	return 0;
}