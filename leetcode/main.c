#include <stdio.h>
#include <stdlib.h>

int searchInsert(int* nums, int numsSize, int target) {

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] >= target)
        {
            return i;
        }
        else if (nums[i] < target && i == numsSize - 1)
        {
            return i + 1;
        }
    }
    return 0;
}

int main()
{

    return 0;
}