#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int singleNumber(int* nums, int numsSize)
{
    if (numsSize == 1)
    {
        return nums[0];
    }

    for (int i = 0; i < numsSize; i++)
    {
        int cnt = 1;
        for (int j = 0; j < numsSize; j++)
        {
            if (nums[i] == nums[j] && i != j)
            {
                cnt++;
                break;
            }
        }
        if (cnt == 1)
        {
            return nums[i];
        }
    }

    return 0;
}
int main()
{

    return 0;
}