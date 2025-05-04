#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* res = (int*)malloc(2 * sizeof(int));

    *returnSize = 2;
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                res[0] = i;
                res[1] = j;

                return res;
            }
        }
    }

    return 0;
}

int main()
{
    int nums[] = { 2, 7, 11, 15 };
    int newsize; 
    int* res = twoSum(nums, 4, 9, &newsize);

    for (int i = 0; i < newsize; i++)
    {
        printf("%d ", res[i]);
    }
    return 0;
}